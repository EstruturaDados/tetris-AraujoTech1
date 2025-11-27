#include <stdio.h>
printf("\n1-Jogar 2-Reservar 3-Usar reserva 4-Trocar 5-Undo 6-Inverter 0-Sair\nOpção: ");
scanf("%d", &op);


Piece temp;
switch(op){


case 1: // jogar
saveSnapshot(&snap, q, s, nextId);
if(dequeue(&q, &temp)){
printf("Jogou [%c %d]\n", temp.name, temp.id);
enqueue(&q, gerarPeca(&nextId));
} else printf("Fila vazia!\n");
break;


case 2: // reservar
saveSnapshot(&snap, q, s, nextId);
if(dequeue(&q, &temp) && pushStack(&s, temp)){
printf("Reservou [%c %d]\n", temp.name, temp.id);
enqueue(&q, gerarPeca(&nextId));
} else printf("Erro ao reservar!\n");
break;


case 3: // usar reserva
saveSnapshot(&snap, q, s, nextId);
if(popStack(&s, &temp)){
printf("Usou [%c %d]\n", temp.name, temp.id);
enqueue(&q, gerarPeca(&nextId));
} else printf("Pilha vazia!\n");
break;


case 4: // trocar
saveSnapshot(&snap, q, s, nextId);
if(swapTopWithFront(&q, &s))
printf("Troca realizada!\n");
else
printf("Não foi possível trocar!\n");
break;


case 5: // undo
restoreSnapshot(&snap, &q, &s, &nextId);
printf("Última ação desfeita!\n");
break;


case 6: // inverter
saveSnapshot(&snap, q, s, nextId);
invertQueue(&q);
printf("Fila invertida!\n");
break;
}


} while(op != 0);
}
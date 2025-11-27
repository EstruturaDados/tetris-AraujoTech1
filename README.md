#  *Tetris Stack — Nível Mestre*

---

## Descrição do Projeto

O Tetris Stack – Nível Mestre é um sistema em C que simula o gerenciamento avançado de peças inspirado no jogo Tetris.

O projeto utiliza estruturas de dados clássicas — fila circular, pilha, lista encadeada e snapshots (undo) — para modelar operações de jogo, como inserir peças, descartar, exibir histórico e restaurar estados.

O sistema foi inteiramente desenvolvido em linguagem C, com modularização completa, uso de alocação dinâmica, Makefile para compilação e arquitetura organizada em múltiplos arquivos .c e .h.

## Funcionalidades do Projeto

O menu disponibiliza as seguintes operações:

1 — Inserir peça na fila

2 — Remover peça da fila

3 — Descartar peça na pilha

4 — Exibir fila e pilha

5 — Exibir histórico de ações

6 — Criar snapshot do estado atual (Salvar estado)

7 — Restaurar snapshot mais recente (Desfazer estado)

0 — Sair do programa

## O sistema oferece:

- Fila circular dinâmica

- Pilha de descarte

- Registro de histórico completo

- Snapshot com deep copy da fila, pilha e histórico

- Validação de ações e mensagens informativas

## Testes de Software

Foram realizados três categorias de testes:
✔️ Teste de Depuração

- Verificação de alocação de memória (malloc, free)

- Teste de estouro da fila / pilha

- Verificação de ponteiros nulos

- Teste de fluxo entre arquivos .c e .h

✔️ Teste de Funcionamento

Cenários testados:

- Inserção em fila vazia

- Remoção de elemento único

- Descarte e empilhamento

- Criação de múltiplos snapshots

- Restauração de estados complexos

- Fila + pilha + histórico integrados

- Execução repetida sem travamentos

✔️ Teste de Segurança

- Proteção contra underflow/overflow

- Verificação de integridade após restauração

- Bloqueio de ações inválidas

- Deep copy seguro para evitar corrupção de memória

## Tecnologias e Linguagens

- Linguagem C (C99)

- GCC como compilador padrão

- Makefile para automação

- VSCode

- Git 

Bibliotecas e Frameworks

## Bibliotecas utilizadas:

- <stdio.h>

- <stdlib.h>

- <string.h>

- <time.h>

---

© 2025 — Desenvolvido para fins educacionais | Estácio de Sá.

# Jogo da Torre de Hanói em C

Este é um jogo da Torre de Hanói desenvolvido em linguagem C. O jogo tem o objetivo de mover todos os discos de uma pilha inicial para uma pilha final, seguindo as regras:

1. Só é possível mover um disco por vez.
2. Não é permitido colocar um disco maior sobre um disco menor.

## Como jogar

O jogo possui três pilhas numeradas de 1 a 3. A pilha 1 é a pilha inicial, onde os discos estão originalmente dispostos em ordem decrescente de tamanho (do maior para o menor). O objetivo é mover todos os discos da pilha 1 para a pilha 3, usando a pilha 2 como intermediária, seguindo as regras mencionadas acima.

Para jogar, siga os seguintes passos:

1. O jogo iniciará automaticamente com os discos dispostos na pilha 1.
2. Digite o número da pilha da qual deseja remover um disco.
3. Digite o número da pilha para a qual deseja adicionar o disco removido.

O jogo continuará até que todos os discos sejam movidos para a pilha 3, indicando que você venceu o jogo. O número de jogadas realizadas será contado e exibido no final.

## Regras

1. Para remover um disco de uma pilha, digite o número da pilha correta (1, 2 ou 3).
2. Para adicionar o disco removido a uma pilha, digite o número da pilha correta (1, 2 ou 3).
3. Tenha cuidado para não colocar um disco maior sobre um disco menor, pois isso não é permitido pelo jogo.

## Comandos

- Digite o número da pilha de origem (1, 2 ou 3) para remover um disco.
- Digite o número da pilha de destino (1, 2 ou 3) para adicionar o disco removido.
- Para visualizar as regras novamente, digite qualquer tecla quando solicitado.

## Boa sorte e divirta-se!

---
**Observação:** Este é um jogo simples desenvolvido em linguagem C. Para fins de um melhor aprendizado e compreensão, algumas melhorias podem ser adicionadas, como tratamento de exceções, interface gráfica, opção de escolha da quantidade de discos, etc.

#include <stdio.h>
#include <process.h>

#define TAM 3


typedef struct{
    int topo;
    int v[TAM];
} Pilha;

// Função para adicionar um elemento à pilha
void push(Pilha *p, int x){
    if(p->topo == TAM-1){
        printf("Pilha cheia - Overflow");
    }
    else{
        p->topo++;

        p->v[p->topo]= x;
    }
}

// Função para remover e retornar o elemento do topo da pilha
int pop(Pilha *p){
    int res;
    if(p->topo==-1){
        printf("\nPilha Vazia - Underflow");
    }
    else{
        res = p->v[p->topo];
        p->topo--;
        return res;
    }
}

// Função para retornar o elemento do topo da pilha sem remover
int top(Pilha p){
    return p.v[p.topo];
}

// Função para imprimir os elementos da pilha (sem alterar a pilha original)

void imprimir(Pilha p, Pilha p2, Pilha p3){
    int matriz[TAM][TAM]={{0}}, inicializador = 0, linha, coluna;
    for(linha=0;linha<TAM;linha++){
        for(coluna=0;coluna<1;coluna++){
            matriz[linha][coluna] = p.v[p.topo];
        }
    }
    for(linha=0;linha<TAM;linha++){
        for(coluna=1;coluna<2;coluna++){
            matriz[linha][coluna] = p2.v[p2.topo];
        }
    }
    for(int i=0;i<TAM;i++){

        printf("\n                      \t\x1b[41m\x1b[30m  %i  \x1b[0m                  \x1b[42m\x1b[30m  %i  \x1b[0m                  \x1b[44m\x1b[30m  %i  \x1b[0m", p.v[p.topo], p2.v[p2.topo], p3.v[p3.topo]);
        pop(&p);
        pop(&p2);
        pop(&p3);
    }
    printf("\n\n\t\t  -------------------------------------------------------------\n\n");
    printf("\t\t       \x1b[31mPILHA 1                \x1b[32mPILHA 2                \x1b[34mPILHA 3\x1b[0m");
}
void slogan_game(){
    printf("\t\t\t    =-=-=-=-=-=-=GAME TORRE DE HANNOI=-=-=-=-=-=-=\n\n");
}
void apresentacao(){
    for(int i =0;i<60;i++){
        printf("=-");
    }
    printf("\n\n\t\t\t\tAluno: Anthonius Miguel Vaz Figueiredo Souza");
    printf("\n\t\t\t\tProfessor: Romulo Nunes");
    printf("\n\n");
    for(int i =0;i<60;i++){
        printf("=-");
    }
    printf("\n\nTORRE DE HANNOI\n\n");
    system("pause");
    system("cls");

}
int main (){
    int z, remover, adicionar, numero_jogadas = 0, menu, testador = 0;
    char nome_jogador[100];
    Pilha p, p2, p3;
    //Inicializa:
    p.topo = -1;
    p2.topo = -1;
    p3.topo = -1;
    push(&p, 3);
    push(&p, 2);
    push(&p, 1);
    for(int i =0;i<TAM;i++){
        push(&p2, 0);
        push(&p3, 0);
    }
    apresentacao();
    fflush(stdin);
    printf("BEM VINDO AO GAME TORRE DE HANNOI!\n\n");
    printf("VAMOS COMECAR?\nDIGITE SEU NOME: ");
    fgets(nome_jogador, sizeof(nome_jogador), stdin);
    system("cls");
    printf("BEM VINDO %s\n\nMENU\n\n[1]INICIAR GAME\n[2]REGRAS\n", nome_jogador);
    scanf("%i", &menu);
    if(menu==2){
        system("cls");
        printf("=-=-=-=REGRAS=-=-=-=\n\n");
        printf("As regras sao bem simples:\n\n1) Voce deve passar todos os elementos da Pilha 1 para a Pilha 3\n2) Nao pode colocar elemento maior sob menor em nenhuma hipotese!\n\nAgora vamos jogar, basta pressionar qualquer tecla\n");
    }
    else{
        system("cls");
        printf("Ja que quer ir sem as regras, vamos la!\n");
    }
    system("pause");
    system("cls");
    slogan_game();
    imprimir(p, p2, p3); //Imprimindo primeira tela
    while(p3.v[p3.topo]==0){
        if(numero_jogadas>0){
            while(p.v[p.topo]==0){
                pop(&p);
            }
            while(p2.v[p2.topo]==0){
                pop(&p2);
            }
            while(p3.v[p3.topo]==0){
                pop(&p3);
            }
        }
        printf("\n\n\t\t\t  Deseja remover elemento de qual pilha? [1, 2 ou 3] ");
        scanf("%i", &remover);

        if(0>remover||remover>3){
            printf("\n\t\t\t\t     ERRO!!!\n\t\t\t  \x1b[43m\x1b[30mPilha nao existente!\x1b[0m\tESCOLHA NOVAMENTE\n\n\t\t\t  Deseja remover elemento de qual pilha? [1, 2 ou 3] ");
            scanf("%i", &remover);
        }

        printf("\n\t\t\t  Para qual pilha? [1, 2 ou 3] ");
        scanf("%i", &adicionar);

        if(0>adicionar||adicionar>3){
            printf("\n\t\t\t\t     ERRO!!!\n\t\t\t  \x1b[43m\x1b[30mPilha nao existente!\x1b[0m\tESCOLHA NOVAMENTE\n\n\t\t\t  Para qual pilha? [1, 2 ou 3] ");
            scanf("%i", &adicionar);
        }

        if(remover==1){
            if(p.topo == -1){
                printf("PILHA VAZIA - UNDERFLOW\nTENTE NOVAMENTE");
            }
            else{
                z = pop(&p);
                push(&p, 0);
            }
        }
        if(remover==2){
            if(p2.topo == -1){
                printf("PILHA VAZIA - UNDERFLOW\nTENTE NOVAMENTE");
            }
            else{
                z = pop(&p2);
                push(&p2, 0);
            }
        }
        if(remover==3){
            if(p3.topo == -1){
                printf("PILHA VAZIA - UNDERFLOW\nTENTE NOVAMENTE");
            }
            else{
                z = pop(&p3);
                push(&p3, 0);
            }
        }
        if(adicionar==1){
            while(p.v[p.topo]==0){
                pop(&p);
            }
            if(p.topo==-1){
                push(&p, z);
            }
            else{
                if(z<p.v[p.topo]){
                    push(&p, z);
                }
                else{
                    if(remover==2){
                        while(p2.v[p2.topo]==0){
                            pop(&p2);
                        }
                        push(&p2, z);
                        while(p2.topo!=TAM-1){
                            push(&p2, 0);
                        }
                    }
                    if(remover==3){
                        while(p3.v[p3.topo]==0){
                            pop(&p3);
                        }
                        push(&p3, z);
                        while(p3.topo!=TAM-1){
                            push(&p3, 0);
                        }
                    }
                    system("cls");
                    printf("CUIDADO!\nNAO PODE ADICIONAR UM NUMERO ENCIMA DE UM MENOR!");
                    system("pause");
                    system("cls");
                }
            }
            while(p.topo!=TAM-1){
                push(&p, 0);
            }
        }
        if(adicionar==2){
            while(p2.v[p2.topo]==0){
                pop(&p2);
            }
            if(p2.topo==-1){
                push(&p2, z);
            }
            else{
                if(z<p2.v[p2.topo]){
                    push(&p2, z);
                }
                else{
                    if(remover==1){
                        while(p.v[p.topo]==0){
                            pop(&p);
                        }
                        push(&p, z);
                        while(p.topo!=TAM-1){
                            push(&p, 0);
                        }
                    }
                    if(remover==3){
                        while(p3.v[p3.topo]==0){
                            pop(&p3);
                        }
                        push(&p3, z);
                        while(p3.topo!=TAM-1){
                            push(&p3, 0);
                        }
                    }
                    system("cls");
                    printf("CUIDADO!\nNAO PODE ADICIONAR UM NUMERO ENCIMA DE UM MENOR!");
                    system("pause");
                    system("cls");
                }
            }
            while(p2.topo!=TAM-1){
                push(&p2, 0);
            }
        }
        if(adicionar==3){
            while(p3.v[p3.topo]==0 && p3.topo!=-1){
                pop(&p3);
            }
            if(p3.topo==-1){
                push(&p3, z);
            }
            else{
                if(z<p3.v[p3.topo]){
                    push(&p3, z);
                }
                else{
                    if(remover==1){
                        while(p.v[p.topo]==0){
                            pop(&p);
                        }
                        push(&p, z);
                        while(p.topo!=TAM-1){
                            push(&p, 0);
                        }
                    }
                    if(remover==2){
                        while(p2.v[p2.topo]==0){
                            pop(&p2);
                        }
                        push(&p2, z);
                        while(p2.topo!=TAM-1){
                            push(&p2, 0);
                        }
                    }
                    system("cls");
                    printf("CUIDADO!\nNAO PODE ADICIONAR UM NUMERO ENCIMA DE UM MENOR!");
                    system("pause");
                    system("cls");
                }
            }
            while(p3.topo!=TAM-1){
                push(&p3, 0);
            }

        }

        while(p.topo != TAM-1){
            push(&p, 0);
        }
        while(p2.topo != TAM-1){
            push(&p2, 0);
        }
        while(p3.topo != TAM-1){
            push(&p3, 0);
        }

        numero_jogadas++;
        system("cls");
        slogan_game();
        printf("\n\t\t\t\t         Numero de jogadas: %i\n\n" ,numero_jogadas);
        imprimir(p, p2, p3);
    }
    system("cls");
    printf("\x1b[42m\x1b[30mPARABENS %s", nome_jogador);
    printf("VOCE VENCEU!\n");
    printf("Numero de jogadas para vencer: %i", numero_jogadas);
    printf("\x1b[0m\n");
    system("pause");
    FILE*file;
    file = fopen("ranking.txt", "w");
    fprintf(file, "Nome do jogador: %sNumero de jogadas: %i", nome_jogador, numero_jogadas);
    return 0;
}

#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//FUNÇÕES DE RECURSIVIDADE
//CIMA DIREITA
void cimadireita() { 
    printf("Cima, direita. \n");
}
//DIREITA
void direita() { 
    printf("Direita. \n");
}
//ESQUERDA
void esquerda() { 
    printf("Esquerda. \n");
}
//CIMA
void cima() { 
    printf("Cima. \n");
}
//REPETIR A MOVIMENTAÇÃO
void movimentacao(int num, char direcao) {
    switch (direcao) {
        case 'd': 
            for (num; num != 0; num--) {
                direita();
            }
        break;
            
        case 'e': 
            for (num; num != 0; num--) {
                esquerda();
            }
        break;

        case 'c': 
            for (num; num != 0; num--) {
                cima();
            }
        break;

        default:
            printf("Você escreveu a direção errada. \n");
               
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5, torre = 5, rainha = 8, cavalo = 3;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimento do bispo: \n");
    while (bispo != 0) {
        cima();
        do {
            direita();
        } while (bispo != bispo);
        bispo--;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimento da torre: \n");
    movimentacao(torre, 'd');

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimento da rainha: \n");
    movimentacao(rainha, 'e');

    // Nível Aventureiro - Movimentação do Cavalo)
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento do cavalo. \n");
    for (cavalo; cavalo != 0; cavalo--) {
        if (cavalo == 1) {
            direita();
            break;
        } else {
            cima();
            continue;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

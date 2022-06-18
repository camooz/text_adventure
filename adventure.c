#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>


int main(void){

    // START: Onibus ou ir a pe?

    char nome[20];
    printf("Ola.\n\n");
    printf("Como se chama?\n");
    printf("-------\n>> ");
    scanf("%s", &nome); 
    fflush(stdin);
    Sleep(1000);

    printf("\nÉ um prazer conhecer você, %s!", nome);
    Sleep(2000);
    printf("\n\nNa verdade, isto foi apenas um teste. Nós já nos conhecemos, %s", nome); 
    Sleep(3000);
    printf("\n\nAfinal, eu sou sua consciência.");
    Sleep(2000);

    printf("\n\nVamos lá. Deixe eu explicar a situação: seu relógio marca 21h37. Você está em pé, esperando em um ponto de ônibus já faz algum tempo. O ponto fica em uma rua que você não conhece bem.");
    Sleep(4000);
    printf("\n\nO que você faz?");
    Sleep(2000);

    int resposta;
    printf("\n[1] Esperar pelo ônibus.\n[2] Ir a pé\n[3] Não estou entendendo nada.\n");
    printf("-------\n>> ");
    scanf("%d", &resposta);
    fflush(stdin);
    switch (resposta){
        case 1:
            Sleep(2000);
            printf("\nHmm. Você não sabe quanto tempo pode ficar esperando pelo ônibus. Talvez algumas horas. Aliás, você não conhece bem o lugar.");
            /* ==================== GUSTAVO START ===================== */





            /* ==================== GUSTAVO FIM ===================== */
            break;
        case 2:
            Sleep(2000);
            printf("\nCerto. Mas, para onde você quer ir a pé? E se o ônibus chegar pouco tempo depois de você partir?");
            /* ==================== JOAO START ===================== */





            /* ==================== JOAO FIM ===================== */
            break;
        case 3:
            Sleep(2000);
            printf("\nEu também não estou entendendo nada, renicie o jogo para ver se você fica mais inteligente.");
            break;
        default:
            printf("\nDigite 1 ou 2 ou 3!");
            break;
    }
}

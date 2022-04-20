#include <stdio.h>
#include <stdlib.h>


int main(void){

    // START: Onibus ou ir a pe?

    char resposta;
    printf("\nDuas horas da madrugada, voce esta esperando o onibus no ponto ao lado de alguem que se parece com um gnomo. ");
    printf("Agora voce tem que decidir se voce vai esperar o onibus ou vai ir a pe. Deixo claro que o onibus pode demorar ate 2 horas ");
    printf("Indo a pe voce demoraria um pouco, mas pelo menos voce tera tempo para refletir sobre a vida.\n\n");
    printf("Me diga, voce quer esperar o onibus? (s/n) ");
    scanf("%c", &resposta);
    
    
    if (resposta == 's'){
        // ESPERAR ONIBUS
        printf("Entao vc vai de onibus\n");
    }
    else if (resposta == 'n'){
        // IR A PE
        printf("Entao vc vai a pe\n");
    }
    else{
        printf("A reposta deve ser 's' ou 'n'. Por favor, renicie o jogo!\n");
    }

    return 0;
}
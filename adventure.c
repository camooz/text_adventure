#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <time.h>


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
    Sleep(5000);
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
            /* ==================== JOAO START ===================== */
            int destination;
            Sleep(2000);
            printf("\nCerto. Mas, para onde você quer ir a pé? E se o ônibus chegar pouco tempo depois de você partir?");
            Sleep(1000);
            printf("\n[1] Ir para casa\n[2] Ir para um restaurante\n");
            printf("-------\n>> ");
            scanf("%d", &destination);
            fflush(stdin);
            while (destination != 1 && destination != 2){
                printf("\nPor favor, escolha uma das opções\n");
                printf("-------\n>> ");
                scanf("%d", &destination);
                fflush(stdin);
            }
            Sleep(2000);

            printf("\nOk. Mas de qualquer forma teremos que seguir por essa estrada. Então vamos!\n");
            Sleep(2000);
            printf("\n(Alguém começa a se aproximar de você, tal alguém estaria ali no mesmo ponto há um tempo, te observando... Não tenho certeza nem se trata de um humano.\n"); 
            Sleep(3000);
            printf("\n[ESTRANHO]: Olá humano, o que você está fazendo parado olhando para o céu? Até parece que você está conversando consigo mesmo dentro da sua mente\n");
            Sleep(4000);

            printf("\nCara, vamo só ignorar ele e sair andando, vai que ele quer nos roubar.\n");
            Sleep(4000);

            printf("\n(Esse estranho, estranhamente, começa a te seguir...)\n");
            Sleep(2000);
            printf("\nCara, e agora %s? Esse louco está nos seguindo. Será que ele quer nos roubar? Quer dizer, roubar vc que sou eu?\n", nome);
            Sleep(3000);

            printf("\n[1] Pedir para ele parar de te seguir\n[2] Sair correndo\n");
            printf("-------\n>> ");
            scanf("%d", &resposta);
            fflush(stdin);
            Sleep(2000);

            if (resposta == 1){
                printf("\n[%s]: Qual foi carinha, pq você está me seguindo? Preciso que você pare agora mesmo.\n", nome);
                Sleep(3000);
                printf("\n[ESTRANHO]: Opa, desculpe meu caro humano, eu só estava preocupado, você parecia meio desligado olhando para o céu...\n");
                Sleep(4000);
                printf("\n[%s]: Ah, então tudo bem. É que eu achei que você queria me assaltar hahaha.\n", nome);
                Sleep(2000);
                printf("\n[ESTRANHO]: Mil desculpas meu caro. Para que lugar você está indo?\n");
                Sleep(2000);
                printf("\n[%s]: Então, na verdade eu estava para pegar o ônibus, mas desisti e decidi ir a pé. Qual é o seu nome?\n", nome);
                Sleep(4000);
                printf("\n[ESTRANHO]: Ah entendi. O meu nome é Carlinhos, Carlinhos Sagan! Muito prazer, caro amigo %s\n", nome);
                Sleep(3500);
                printf("\n[%s]: Ãnnnn??? Como assim, como você sabe o meu nome, eu nunca disse o meu nome para você!!\n", nome);
                Sleep(3500);
                printf("\n[ESTRANHO]: HAHAHA, é porque está escrito no seu crachá, jovem %s\n", nome);
                Sleep(3000);
                printf("\n[ESTRANHO]: Mas me diga %s, você gosta de olhar para as estrelas?\n", nome);
                Sleep(3000);

                printf("\n[1] Sim, é tão bonito e interessante.\n[2] Não, nunca fui muito de reparar nelas.\n");
                printf("-------\n>> ");
                scanf("%d", &resposta);
                fflush(stdin);
                Sleep(2000);

                if (resposta == 1){
                    printf("\n[ESTRANHO]: Eu também acho amigo. Sabe, é interessante como nós primatas formados por poeira estelar observamos os cosmos...\n");
                    Sleep(4000);
                    printf("\n[ESTRANHO]: É um tanto poético.. É como se nós fôssemos uma maneira do Cosmos conhecer a si mesmo!\n");
                    Sleep(6000);
                    printf("\n[ESTRANHO]: Enfim caro %s. Eu queria poder conversar mais com você. Mas tenho que ir.\n", nome);
                    Sleep(4000);
                    printf("\n[ESTRANHO]: Diante da vastidão do tempo e da imensidão do universo, é um imenso prazer para mim dividir um planeta e uma época com você... Até mais!\n");
                    Sleep(7000);
                    printf("\nCaraca, que carinha maneiro, só a presença dele já me deixou mais feliz. E eu achando que ele ia assaltar a gente hahaha.\n");
                    Sleep(4000);
                    printf("\nAgora temos que ir, vamos! Se não vamos perder mais um episódio de Cosmos!\n");
                    Sleep(5000);
                    printf("\n==============FIM================\n");
                }
                else if (resposta == 2){
                    printf("\n[ESTRANHO]: Hm, isso é um tanto quanto comum. Com as responsabilidades e preocupações da vida às vezes deixamos de pensar sobre a nossa própria existência.\n");
                    Sleep(5000);
                    printf("\n[ESTRANHO]: Mas me diga, você sabe quantas estrelas possuem no universo?\n");
                    Sleep(3000);
                    printf("\n[ESTRANHO]: Na verdade, uma mais fácil, quantas estrelas possuem na nossa galáxia?\n");
                    Sleep(4000);

                    printf("\n[1] 100 mil?");
                    printf("\n[2] 1 milhão talvez?");
                    printf("\n[3] Ou quem sabe 100 milhões, ou até mesmo 1 bilhão?");
                    printf("\n[4] Ou será que a resposta está na casa dos 100 bilhões, centenas de bilhares?");
                    printf("-------\n>> ");
                    scanf("%d", &resposta);
                    fflush(stdin);
                    while (resposta != 4){
                        printf("\n[ESTRANHO]: Tente novamente caro %s\n", nome);
                        printf("-------\n>> ");
                        scanf("%d", &resposta);
                        fflush(stdin);
                    }
                    printf("\n[ESTRANHO]: Exatamente! Incrível, né? Somos ao mesmo tempo tão insignificantes e especiais.\n");
                    Sleep(5000);
                    printf("\n==============FIM================\n");
                }
                else {
                    printf("\nCaro jogador, a resposta era 1 ou 2. Como você é bur-- ops, quer dizer, como você errou o dígito, deve reiniciar o jogo!\n");
                }
            }
            else if (resposta == 2){
                // SAIR CORRENDO
                printf("\nCorre, corre!!! Esse cara é doidão!\n");
                Sleep(2000);
                printf("\nAcho que conseguimos despistar ele, estamos bem!\n");
                Sleep(3000);
                printf("\nBom, então vamos seguindo!\n");
                Sleep(3000);
                if (destination == 1){
                    // Casa
                    printf("\nJá se passaram 30 minutos que estamos andando, acho q estamos perto de casa.\n");
                    Sleep(3000);
                    printf("\nEita, vc tá vendo aquilo? Uma barraca de apostas. Se a gnt acertar o número, vamos ganhar 100 reais, que é o suficiente para um rodízio de japônes hehe\n");
                    Sleep(5000);
                    printf("\nPorém, se perdermos, vamos perder também 100 reais. O que você acha? Você quer ir lá tentar a sorte?\n");
                    Sleep(3000);

                    printf("\n[1] Sim.\n[2] Não.\n");
                    printf("-------\n>> ");
                    scanf("%d", &resposta);
                    fflush(stdin);

                    if (resposta == 1){
                        int aposta;
                        printf("\n[APOSTADOR]: Olá, seja bem-vindo. Escolha um número de 1 a 10\n");
                        Sleep(3000);
                        printf("-------\n>> ");
                        scanf("%d", &aposta);
                        fflush(stdin);

                        // Random number
                        srand(time(NULL));  
                        int random_number = rand() % 10;

                        if (aposta == random_number){
                            printf("\n[APOSTADOR]: Você é o vencedor!!!! Tome, 100 reais!\n");
                            Sleep(3000);
                            printf("\nOBAAAAAAAAAAAAAAAA\n", nome);
                            Sleep(3000);
                            printf("\nJá liga para a nossa mãe e avisa ela que sexta vamos ao rodízio JAPA! hehe\n");
                            Sleep(3000);
                            printf("\n==============FIM================\n");
                        }
                        else {
                            printf("\n[APOSTADOR]: Infelizmente, não foi dessa vez! O número era o %d\n", random_number);
                            Sleep(3000);
                            printf("\nAff, não acredito que perdemos 100 reais de besta. Depois dessa vou pra casa assistir novela que eu ganho mais.\n");
                            Sleep(3000);
                            printf("\n==============FIM================\n");
                        }
                    }
                    else {
                        printf("\nÉ melhor não mesmo, não podemos perder essa grana. Temos que comprar o brownie ainda... Vamos para casa logo\n");
                        Sleep(4000);
                        printf("\n(30 minutos se passaram e vc chega em casa)\n");
                        Sleep(3000);
                        printf("\nOi mãeee, o que tem pra cûme?\n");
                        Sleep(3000);
                        printf("\n[MÃE]: Oi %s, hoje vamos ter farofa de lasanha com rabo de peixe, e uma pitada de molho rosa\n", nome);
                        Sleep(6000);
                        printf("\n[%s]: Obaaa! O meu favorito!!\n", nome);
                        Sleep(3000);
                        printf("\n==============FIM================\n");
                    }
                }
                else if (destination == 2){
                    // Restaurante
                    printf("\nAcho que a melhor opção para a gente ir é o bar do Zeca, lá tem um prato feito de filé de frango por 12 reais.\n");
                    Sleep(4000);
                    printf("\n(20 minutos se passam e vc chega ao bar do zeca)\n");
                    Sleep(4000);
                    printf("\n[%s]: Fala seu Zeca, beleza? Me vê um filé de frango aí por favor.\n", nome);
                    Sleep(4000);
                    printf("\n[ZECA]: Opa %s, como é que você tá, tranquilo? Então, infelizmente eu tô sem filé de frango hoje, o Gêronimo comeu tudo.\n", nome);
                    Sleep(4000);
                    printf("\n[ZECA]: Mas se você quiser aqui eu tenho orelha de porco, pode ser? \n", nome);

                    printf("\n[1] Claro, mó delícia.\n[2] Putz Zeca, orelha de porco não dá não, vai dar mó dor de barriga nessa hora da noite.\n");
                    printf("-------\n>> ");
                    scanf("%d", &resposta);
                    fflush(stdin);
                    if (resposta == 1){
                        printf("\n(Péssima escolha, 30 minutos depois deu uma dor de barriga que fez você passar o resto da noite no banheiro!)\n");
                        Sleep(4000);
                        printf("\n==============FIM================\n");
                    }
                    else if (resposta == 2){
                        printf("\nAinda bem que a gente não comeu aquilo, melhor comer em casa mesmo, vamos embora!\n");
                        Sleep(4000);
                        printf("\n==============FIM================\n");
                    }
                    else {
                        printf("\nCaro jogador, a resposta era 1 ou 2. Como você é bur-- ops, quer dizer, como você errou o dígito, deve reiniciar o jogo!\n");
                    }
                }
            }
            else {
                printf("\nCaro jogador, a resposta era 1 ou 2. Como você é bur-- ops, quer dizer, como você errou o dígito, deve reiniciar o jogo!\n");
            }
            /* ==================== JOAO FIM ===================== */
            break;
        case 3:
            Sleep(2000);
            printf("\nEntão busque conhecimento!");
            break;
        default:
            printf("\nDigite 1 ou 2 ou 3! Jogo deve ser reniciado!");
            break;
    }
}

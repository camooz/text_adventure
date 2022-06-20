#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <time.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
    char nome[20];
    printf("Olá.\n\n");
    Sleep(2000);
    printf("Como se chama?\n");
    printf("-------\n>> ");
    scanf("%s", &nome); 
    fflush(stdin);
    Sleep(1000);
    printf("\nÉ um prazer conhecer você, %s!", nome);
    Sleep(2000);
    printf("\n\nNa verdade, isto foi apenas um teste. Nós já nos conhecemos, %s.", nome); 
    Sleep(3000);
    printf("\n\nAfinal, eu sou sua consciência.");
    Sleep(2000);
    printf("\n\nVamos lá. Deixe eu explicar a situação: seu relógio marca 21h37. Você está em pé, esperando em um ponto de ônibus já faz algum tempo. O ponto fica em uma rua que você não conhece bem.");
    Sleep(5000);
    printf("\n\nO que você faz?");
    Sleep(2000);
    int resposta;
    int destination;
    printf("\n[1] Esperar pelo ônibus.\n[2] Ir a pé\n[3] Não estou entendendo nada.\n");
    printf("-------\n>> ");
    scanf("%d", &resposta);
    fflush(stdin);
    while (resposta == 3){
	printf("\nEntão busque conhecimento!");
	printf("\n\nO que você faz?");
	printf("\n[1] Esperar pelo ônibus.\n[2] Ir a pé\n[3] Não estou entendendo nada.\n");
    printf("-------\n>> ");
    scanf("%d", &resposta);
    fflush(stdin);
	Sleep(2000);
	}
    switch (resposta){
        case 1:
            Sleep(2000);
            printf("\nHmm. Você não sabe quanto tempo pode ficar esperando pelo ônibus. Talvez algumas horas. Aliás, você não conhece bem o lugar.");
            /* ==================== GUSTAVO START ===================== */
			Sleep(3000);
			printf("\n\nVocê percebe o dilema em que se encontra e fica por mais alguns minutos pensando nisso.");
			Sleep(5000);
			printf("\n\nSeu relógio agora marca 21h49. Você sente seu coração ficar um pouco acelerado. O tempo está passando e você ainda não saiu do lugar.");
			Sleep(4000);
			printf("\n\n[ESTRANHO]: Ônibus demorado, não?");
			Sleep(2000);
			printf("(\n\nUm estranho puxa assunto com você. Você sente medo.)");
			printf("\n[1] Ignorá-lo.\n[2] Respondê-lo.\n[3] Sair correndo.\n");
			printf("-------\n>> ");
			scanf("%d", &resposta);
			fflush(stdin);
			if (resposta == 1){
				printf("\nEntão você escolheu ignorá-lo.");
				Sleep(2000);
				printf("\n\nEu entendo, você está com medo. Mas, não é muito mais fácil só fingir que não existe? Do que tomar atitudes?");
				Sleep(2000);
				printf("\n\nSe fosse para ele te assaltar ou algo do tipo, já não acha que ele teria feito? Ele está do seu lado!");
				Sleep(2000);
				printf("\n\nOu será que está?");
				Sleep(2000);
				printf("\n\nVocê rapidamente olha para o lado e...");
				Sleep(4000);
				printf("\n\n(É apenas um senhor de idade, ele parece muito calmo)");
				Sleep(2000);
				printf("\n\n[%s]: É... É mesmo.", nome);
				Sleep(3000);
				printf("\n\n[ESTRANHO]: Para onde você vai?");
				Sleep(4000);
				printf("\n\n[%s]: Bem... Eu não sei, na verdade.", nome);
				Sleep(4000);
				printf("\n\n[ESTRANHO]: Hahaha. Para quem está perdido, qualquer caminho serve.");
				Sleep(5000);
				printf("\n\nVocê pensa nessa frase por mais algum tempo.");
				Sleep(5000);
				printf("\n\nFinalmente, o relógio marca 22h. Porém, nada de ônibus. A rua está vazia.");
				Sleep(3000);
				printf("\n\nO que você faz?");
				printf("\n[1] Continuar esperando\n[2] Ir a pé\n[3] Conversar com o velho\n");
    			printf("-------\n>> ");
    			scanf("%d", &resposta);
   				fflush(stdin);
				if (resposta == 3){
					printf("\n\nVocê olha novamente para o lado. No entanto, dessa vez, o velho não está mais lá.");
					Sleep(2000);
					printf("\n\nPara onde ele foi?");
					Sleep(2000);
					printf("\n\nO que você faz?");
					printf("\n[1] Continuar esperando\n[2] Ir a pé\n");
    				printf("-------\n>> ");
    				scanf("%d", &resposta);
   					fflush(stdin);
   					while (resposta == 1){
   					printf("\n\nVocê espera mais um pouco.");
   					Sleep(5000);
   					printf("\n\nNenhum ônibus a vista. A rua continua vazia.");
   					Sleep(2000);
   					printf("\n\nO que você faz?");
					printf("\n[1] Continuar esperando\n[2] Ir a pé\n");
    				printf("-------\n>> ");
    				scanf("%d", &resposta);
   					fflush(stdin);
				   }
				} else if (resposta == 2){
					printf("\n\nEntão você decide finalmente ir embora do ponto de ônibus.");
					Sleep(3000);
					printf("\n\nVocê observa o caminho, as casas, os comércios fechados e tudo parece tão deserto.");
					Sleep(4000);
					printf("\n\nDepois de 10 minutos de caminhada, você ouve um barulho distante.");
					Sleep(4000);
					printf("\n\nEsse barulho parece se aproximar. Cada vez mais.");
					Sleep(4000);
					printf("\n\nVocê decide finalmente olhar para trás.");
					Sleep(4000);
					printf("\n\nO ônibus passa por você com velocidade. Você sente um vento gelado e vê, aos poucos, o ônibus sumindo na distância.");
					Sleep(5000);
				}
			} else if (resposta == 2){
				printf("\n\n[%s]: Sim. Os ônibus costumam demorar por aqui.", nome);
				Sleep(3000);
				printf("\n\n[ESTRANHO]: Você conhece a região?");
				Sleep(3000);
				printf("\n\nParece que sua memória não está tão vazia quanto antes. Você olha para a rua e reconhece alguns pontos: um bar, um mercado com uma placa de neon, algumas árvores...");
				Sleep(4000);
				printf("\n\n[%s]: Um pouco. Se bem me lembro, sim.", nome);
				Sleep(4000);
				printf("\n\nNenhuma resposta.");
				Sleep(3000);
				printf("\n\nPara alguém que mal conversa com as pessoas, esse diálogo foi bem profundo.");
				Sleep(3000);
				printf("\n\nFinalmente, o relógio marca 22h. Porém, nada de ônibus. A rua está vazia.");
				Sleep(3000);
				printf("\n\nO que você faz?");
				printf("\n[1] Continuar esperando\n[2] Ir a pé\n[3] Conversar com o velho\n");
    			printf("-------\n>> ");
    			scanf("%d", &resposta);
   				fflush(stdin);
   				while (resposta == 1){
   					printf("\n\nVocê espera mais um pouco.");
   					Sleep(5000);
   					printf("\n\nNenhum ônibus a vista. A rua continua vazia.");
   					Sleep(2000);
   					printf("\n\nO que você faz?");
					printf("\n[1] Continuar esperando\n[2] Ir a pé\n[3] Conversar com o velho");
    				printf("-------\n>> ");
    				scanf("%d", &resposta);
   					fflush(stdin);
				   }
				if (resposta == 3){
					printf("\n\nVocê olha novamente para o lado. No entanto, dessa vez, o velho não está mais lá.");
					Sleep(2000);
					printf("\n\nPara onde ele foi?");
					Sleep(2000);
					printf("\n\nO que você faz?");
					printf("\n[1] Continuar esperando\n[2] Ir a pé\n");
    				printf("-------\n>> ");
    				scanf("%d", &resposta);
   					fflush(stdin);
   					while (resposta == 1){
   					printf("\n\nVocê espera mais um pouco.");
   					Sleep(5000);
   					printf("\n\nNenhum ônibus a vista. A rua continua vazia.");
   					Sleep(2000);
   					printf("\n\nO que você faz?");
					printf("\n[1] Continuar esperando\n[2] Ir a pé\n");
    				printf("-------\n>> ");
    				scanf("%d", &resposta);
   					fflush(stdin);
				   }
				} else if (resposta == 2){
					printf("\n\nEntão você decide finalmente ir embora do ponto de ônibus.");
					Sleep(3000);
					printf("\n\nVocê observa o caminho, as casas, os comércios fechados e tudo parece tão deserto.");
					Sleep(4000);
					printf("\n\nDepois de 10 minutos de caminhada, você ouve um barulho distante.");
					Sleep(4000);
					printf("\n\nEsse barulho parece se aproximar. Cada vez mais.");
					Sleep(4000);
					printf("\n\nVocê decide finalmente olhar para trás.");
					Sleep(4000);
					printf("\n\nO ônibus passa por você com velocidade. Você sente um vento gelado e vê, aos poucos, o ônibus sumindo na distância.");
					Sleep(5000);
					printf("\n\n\"Será que o ônibus passou só porque eu saí do ponto?\"");
					Sleep(3000);
					printf("\n\n\"Se eu tivesse esperado... ele passaria do mesmo assim?\"");
					Sleep(3000);
					printf("\n\n\"Nesse mesmo horário?\"");
					Sleep(3000);
					printf("\n\nEnfim, agora ele já foi embora.");
					Sleep(3000);
					printf("\n\nVocê continua andando pela rua. Você não sente mais medo. O céu banhado pelo luar é imenso. A lua está incrível esta noite e até algumas estrelas podem ser vistas.");
					Sleep(4000);
					printf("\n\nPor algum motivo, você começa a reparar em todos os detalhes que compõem aquele lugar. A iluminação amarela dos postes, as casas (algumas delas com luzes acesas), as árvores, as placas de trânsito, a distância...");
					Sleep(5000);
					printf("\n\nVocê tenta conter em si mesmo todos esses detalhes. São muitos, mas por alguma razão inexplicável, todos parecem caber. A sensação é de paz. A ausência de pessoas ou carros já não te incomoda mais.");
					Sleep(4000);
					printf("\n\nPor quanto tempo você passou sem notar? Quanto tempo você passou preso aqui dentro? Dentro da sua própria mente. E deixou de lado toda a realidade que te circunda e te envolve o tempo todo?");
					Sleep(5000);
					printf("\n\n(...)");
					Sleep(5000);
					printf("\n\nLá longe, capturado pelo seu olhar, você vê algo brilhante.");
					Sleep(3000);
					printf("\n\nVocê não sabe o que é, mas ainda assim, parece te chamar.");
					Sleep(4000);
					printf("\n\nAos poucos, as memórias começam a aparecer. Você se lembra de tudo e de todos, lentamente: o porquê estava naquele ponto, o trajeto de volta para casa...");
					Sleep(5000);
					printf("\n\nPor um breve instante, você se lembra das pessoas mais queridas na sua vida e da sua família. O sentido da sua vida. Todo o resto parece só um sonho estranho.");
					Sleep(5000); 
                    printf("\n\nVocê se lembra de todas essas coisas e esboça um sorriso. \"Agora tudo está bem.\"");
                    Sleep(4000);
                    printf("\n\n=============FIM===============");
				}
			} else if (resposta == 3){
				printf("\n\nSair correndo? Hmm. Se você continuar pensando, não sairá do lugar...");
				Sleep(4000);
				printf("\n\nVá! Corra! Não fique conversando comigo.");
				Sleep(3000);
				printf("\n\nVocê dá um passo tímido enquanto ganha coragem para sair disparado.");
				Sleep(2000);
				printf("\n\n[ESTRANHO]: Não se preocupe. Uma hora o ônibus passará.");
				Sleep(3000);
				printf("\n\nVocê para por um instante.");
				Sleep(3000);
				printf("\n\n\"Ele é só um velho no final das contas\", você pensa");
				Sleep(3000);
				printf("\n\nVocê volta o passo e, quando se vira, não há mais ninguém lá.");
				Sleep(3000);
				printf("\n\nPara onde ele foi?");
			} 
            /* ==================== GUSTAVO FIM ===================== */
            break;
        case 2:
            /* ==================== JOAO START ===================== */
            
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

            printf("\nOk. Mas de qualquer forma teremos que seguir por essa estrada. Então vamos?\n");
            Sleep(2000);
            printf("\n(Alguém começa a se aproximar de você, essa pessoa estaria ali no mesmo ponto há um tempo, te observando... Não posso nem dizer se é mesmo um humano.\n"); 
            Sleep(3000);
            printf("\n[ESTRANHO]: Olá. O que você está fazendo parado olhando para o céu? Até parece que você está conversando consigo mesmo dentro da sua mente...\n");
            Sleep(4000);

            printf("\nCara, vamo só ignorá-lo e sair andando. Estranhos a essa hora da noite. Isso não é um bom sinal.\n");
            Sleep(4000);

            printf("\n(Esse estranho, estranhamente, começa a te seguir...)\n");
            Sleep(2000);
            printf("\nE agora, %s? Esse louco está nos seguindo. Será que ele quer nos roubar? Quero dizer, roubar você... Não tem como alguém roubar sua consciência, não é mesmo?\n", nome);
            Sleep(3000);

            printf("\n[1] Pedir para ele parar de te seguir\n[2] Sair correndo\n");
            printf("-------\n>> ");
            scanf("%d", &resposta);
            fflush(stdin);
            Sleep(2000);

            if (resposta == 1){
                printf("\n[%s]: Qual foi carinha, por que você está me seguindo? Preciso que você pare agora mesmo.\n", nome);
                Sleep(3000);
                printf("\n[ESTRANHO]: Opa, desculpe meu caro, eu só estava intrigado, você parecia meio desligado olhando para o céu...\n");
                Sleep(4000);
                printf("\n[%s]: Estava? Hmm. É acho que sou um pouco desligado mesmo. Aliás, me desculpe. Achei que você queria me assaltar hahaha.\n", nome);
                Sleep(2000);
                printf("\n[ESTRANHO]: Mil desculpas, jovem. Se não importa que eu pergunte: para qual lugar você está indo?\n");
                Sleep(2000);
                printf("\n[%s]: Então, na verdade eu estava para pegar o ônibus, mas desisti e decidi seguir o caminho a pé. Um caminho... que não sei bem para onde me leva... Qual é o seu nome?\n", nome);
                Sleep(4000);
                printf("\n[ESTRANHO]: Entendo. O meu nome é Carlinhos, Carlinhos Sagan! Muito prazer, caro amigo %s\n", nome);
                Sleep(3500);
                printf("\n[%s]: C-como assim, como você sabe o meu nome?\n", nome);
                Sleep(3500);
                printf("\n[CARLINHOS]: HAHAHA, eu te conheço muito bem. Treinei com um mago há algum tempo e agora possuo telepatia. Só estou brincando com você, filho. Eu vi no seu crachá. %s\n", nome);
                Sleep(3000);
                printf("\n[CARLINHOS]: Mas, me diga %s, você gosta de olhar para as estrelas?\n", nome);
                Sleep(3000);

                printf("\n[1] Sim, é tão bonito e interessante.\n[2] Não, nunca fui muito de reparar nelas.\n");
                printf("-------\n>> ");
                scanf("%d", &resposta);
                fflush(stdin);
                Sleep(2000);

                if (resposta == 1){
                    printf("\n[CARLINHOS]: Eu também acho amigo. Sabe, é interessante como nós primatas formados por poeira estelar observamos os cosmos...\n");
                    Sleep(4000);
                    printf("\n[CARLINHOS]: É um tanto poético.. É como se nós fôssemos uma maneira do Cosmos conhecer a si mesmo!\n");
                    Sleep(6000);
                    printf("\n[CARLINHOS]: Enfim caro, %s. Eu queria poder conversar mais com você. Mas tenho que ir.\n", nome);
                    Sleep(4000);
                    printf("\n[CARLINHOS]: Diante da vastidão do tempo e da imensidão do universo, é um imenso prazer, para mim, dividir um planeta e uma época com você... Até mais!\n");
                    Sleep(7000);
                    printf("\nCaraca, que carinha maneiro, só a presença dele já me deixou mais feliz. E eu achando que ele ia me assaltar hahaha.\n");
                    Sleep(4000);
                    printf("\nAgora temos que ir, vamos! Se não vamos perder mais um episódio de Cosmos!\n");
                    Sleep(5000);
                    printf("\n==============FIM================\n");
                }
                else if (resposta == 2){
                    printf("\n[CARLINHOS]: Hm, isso é um tanto quanto comum. Com as responsabilidades e preocupações da vida, às vezes deixamos de pensar sobre a nossa própria existência.\n");
                    Sleep(5000);
                    printf("\n[CARLINHOS]: Mas me diga, você sabe quantas estrelas possuem no universo?\n");
                    Sleep(3000);
                    printf("\n[CARLINHOS]: Na verdade, uma mais fácil, quantas estrelas possuem na nossa galáxia?\n");
                    Sleep(4000);
                    printf("\n[1] 100 mil?");
                    printf("\n[2] 1 milhão, talvez?");
                    printf("\n[3] Ou quem sabe 100 milhões, ou até mesmo 1 bilhão?");
                    printf("\n[4] Ou será que a resposta está na casa dos 100 bilhões, centenas de bilhares?");
                    printf("-------\n>> ");
                    scanf("%d", &resposta);
                    fflush(stdin);
                    while (resposta != 4){
                        printf("\n[CARLINHOS]: Tente novamente, caro %s\n", nome);
                        printf("-------\n>> ");
                        scanf("%d", &resposta);
                        fflush(stdin);
                    }
                    printf("\n[CARLINHOS]: Exatamente! Incrível, não? Somos ao mesmo tempo tão insignificantes e especiais.\n");
                    Sleep(5000);
                    printf("\n==============FIM================\n");
                }
                else {
                    printf("\nCaro jogador, a resposta era 1 ou 2. Como você é bur-- ops, quero dizer, como você errou o dígito, deve reiniciar o jogo!\n");
                }
            }
            else if (resposta == 2){
                // SAIR CORRENDO
                printf("\nCorre, corre!!! Esse cara é DOIDÃO!\n");
                Sleep(2000);
                printf("\nAcho que conseguimos despistar ele, estamos bem!\n");
                Sleep(3000);
                printf("\nBom, então vamos seguindo!\n");
                Sleep(3000);
                if (destination == 1){
                    // Casa
                    printf("\nJá se passaram 30 minutos que estamos andando, acho que estamos perto de casa.\n");
                    Sleep(3000);
                    printf("\nEita, você tá vendo aquilo? Uma barraca de apostas. Se a gente acertar o número, vamos ganhar 100 reais, que é o suficiente para um rodízio de japônes hehe\n");
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
                            printf("\nJá liga para a nossa mãe e avisa que sexta vamos ao rodízio JAPA! hehe\n");
                            Sleep(3000);
                            printf("\n==============FIM================\n");
                        }
                        else {
                            printf("\n[APOSTADOR]: Infelizmente, não foi dessa vez! O número sorteado foi: %d.\n", random_number);
                            Sleep(3000);
                            printf("\nAff, não acredito que perdemos 100 reais de besta. Depois dessa, vou pra casa assistir novela que eu ganho mais.\n");
                            Sleep(3000);
                            printf("\n==============FIM================\n");
                        }
                    }
                    else {
                        printf("\nÉ melhor não mesmo, não podemos perder essa grana. Temos que comprar o brownie ainda... Vamos para casa logo.\n");
                        Sleep(4000);
                        printf("\n(30 minutos se passaram e você chega em casa)\n");
                        Sleep(3000);
                        printf("\nOi mãeee! O que tem pra cumê?\n");
                        Sleep(3000);
                        printf("\n[MÃE]: Oi %s, hoje vamos ter farofa de lasanha com rabo de peixe, e uma pitada de molho rosa.\n", nome);
                        Sleep(6000);
                        printf("\n[%s]: Obaaa! O meu favorito!!\n", nome);
                        Sleep(3000);
                        printf("\n==============FIM================\n");
                    }
                }
                else if (destination == 2){
                    // Restaurante
                    printf("\nAcho que a melhor opção é o bar do Zeca, lá tem um prato feito de filé de frango por 12 reais.\n");
                    Sleep(4000);
                    printf("\n(20 minutos se passam e você chega ao bar do Zeca)\n");
                    Sleep(4000);
                    printf("\n[%s]: Fala seu Zeca, beleza? Me vê um filé de frango, por favor.\n", nome);
                    Sleep(4000);
                    printf("\n[ZECA]: Opa %s, como é que você 'tá', tranquilo? Então, infelizmente eu 'tô' sem filé de frango hoje, o Gêronimo comeu tudo.\n", nome);
                    Sleep(4000);
                    printf("\n[ZECA]: Mas se você quiser aqui eu tenho orelha de porco, pode ser?\n");

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
                        printf("\nAinda bem que você não comeu aquilo. Coma em casa mesmo, vamos embora!\n");
                        Sleep(4000);
                        printf("\nAos poucos, as memórias começam a aparecer. Você se lembra de tudo e de todos, lentamente: o porquê estava naquele ponto, o trajeto de volta para casa...");
						Sleep(4000);
						printf("\nPor um breve instante, você se lembra das pessoas mais queridas na sua vida e da sua família. O sentido da sua vida. Todo o resto parece só um sonho estranho.");
						Sleep(4000); 
                        printf("\nVocê se lembra de todas essas coisas e esboça um sorriso. \"Agora tudo está bem.\"");
                        Sleep(4000);
                        printf("\n\n==============FIM================\n");
                    }
                    else {
                        printf("\nCaro jogador, a resposta era 1 ou 2. Como você é burr-- ops, quer dizer, como você errou o dígito, deve reiniciar o jogo!\n");
                    }
                }
            }
            else {
                printf("\nCaro jogador, a resposta era 1 ou 2. Como você é burr-- ops, quer dizer, como você errou o dígito, deve reiniciar o jogo!\n");
            }
            /* ==================== JOAO FIM ===================== */
            break;
        default:
            printf("\nDigite 1 ou 2 ou 3! Jogo deve ser reniciado!");
            break;
    }
}

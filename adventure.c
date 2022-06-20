#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <time.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
    char nome[20];
    printf("Ol�.\n\n");
    Sleep(2000);
    printf("Como se chama?\n");
    printf("-------\n>> ");
    scanf("%s", &nome); 
    fflush(stdin);
    Sleep(1000);
    printf("\n� um prazer conhecer voc�, %s!", nome);
    Sleep(2000);
    printf("\n\nNa verdade, isto foi apenas um teste. N�s j� nos conhecemos, %s.", nome); 
    Sleep(3000);
    printf("\n\nAfinal, eu sou sua consci�ncia.");
    Sleep(2000);
    printf("\n\nVamos l�. Deixe eu explicar a situa��o: seu rel�gio marca 21h37. Voc� est� em p�, esperando em um ponto de �nibus j� faz algum tempo. O ponto fica em uma rua que voc� n�o conhece bem.");
    Sleep(5000);
    printf("\n\nO que voc� faz?");
    Sleep(2000);
    int resposta;
    int destination;
    printf("\n[1] Esperar pelo �nibus.\n[2] Ir a p�\n[3] N�o estou entendendo nada.\n");
    printf("-------\n>> ");
    scanf("%d", &resposta);
    fflush(stdin);
    while (resposta == 3){
	printf("\nEnt�o busque conhecimento!");
	printf("\n\nO que voc� faz?");
	printf("\n[1] Esperar pelo �nibus.\n[2] Ir a p�\n[3] N�o estou entendendo nada.\n");
    printf("-------\n>> ");
    scanf("%d", &resposta);
    fflush(stdin);
	Sleep(2000);
	}
    switch (resposta){
        case 1:
            Sleep(2000);
            printf("\nHmm. Voc� n�o sabe quanto tempo pode ficar esperando pelo �nibus. Talvez algumas horas. Ali�s, voc� n�o conhece bem o lugar.");
            /* ==================== GUSTAVO START ===================== */
			Sleep(3000);
			printf("\n\nVoc� percebe o dilema em que se encontra e fica por mais alguns minutos pensando nisso.");
			Sleep(5000);
			printf("\n\nSeu rel�gio agora marca 21h49. Voc� sente seu cora��o ficar um pouco acelerado. O tempo est� passando e voc� ainda n�o saiu do lugar.");
			Sleep(4000);
			printf("\n\n[ESTRANHO]: �nibus demorado, n�o?");
			Sleep(2000);
			printf("(\n\nUm estranho puxa assunto com voc�. Voc� sente medo.)");
			printf("\n[1] Ignor�-lo.\n[2] Respond�-lo.\n[3] Sair correndo.\n");
			printf("-------\n>> ");
			scanf("%d", &resposta);
			fflush(stdin);
			if (resposta == 1){
				printf("\nEnt�o voc� escolheu ignor�-lo.");
				Sleep(2000);
				printf("\n\nEu entendo, voc� est� com medo. Mas, n�o � muito mais f�cil s� fingir que n�o existe? Do que tomar atitudes?");
				Sleep(2000);
				printf("\n\nSe fosse para ele te assaltar ou algo do tipo, j� n�o acha que ele teria feito? Ele est� do seu lado!");
				Sleep(2000);
				printf("\n\nOu ser� que est�?");
				Sleep(2000);
				printf("\n\nVoc� rapidamente olha para o lado e...");
				Sleep(4000);
				printf("\n\n(� apenas um senhor de idade, ele parece muito calmo)");
				Sleep(2000);
				printf("\n\n[%s]: �... � mesmo.", nome);
				Sleep(3000);
				printf("\n\n[ESTRANHO]: Para onde voc� vai?");
				Sleep(4000);
				printf("\n\n[%s]: Bem... Eu n�o sei, na verdade.", nome);
				Sleep(4000);
				printf("\n\n[ESTRANHO]: Hahaha. Para quem est� perdido, qualquer caminho serve.");
				Sleep(5000);
				printf("\n\nVoc� pensa nessa frase por mais algum tempo.");
				Sleep(5000);
				printf("\n\nFinalmente, o rel�gio marca 22h. Por�m, nada de �nibus. A rua est� vazia.");
				Sleep(3000);
				printf("\n\nO que voc� faz?");
				printf("\n[1] Continuar esperando\n[2] Ir a p�\n[3] Conversar com o velho\n");
    			printf("-------\n>> ");
    			scanf("%d", &resposta);
   				fflush(stdin);
				if (resposta == 3){
					printf("\n\nVoc� olha novamente para o lado. No entanto, dessa vez, o velho n�o est� mais l�.");
					Sleep(2000);
					printf("\n\nPara onde ele foi?");
					Sleep(2000);
					printf("\n\nO que voc� faz?");
					printf("\n[1] Continuar esperando\n[2] Ir a p�\n");
    				printf("-------\n>> ");
    				scanf("%d", &resposta);
   					fflush(stdin);
   					while (resposta == 1){
   					printf("\n\nVoc� espera mais um pouco.");
   					Sleep(5000);
   					printf("\n\nNenhum �nibus a vista. A rua continua vazia.");
   					Sleep(2000);
   					printf("\n\nO que voc� faz?");
					printf("\n[1] Continuar esperando\n[2] Ir a p�\n");
    				printf("-------\n>> ");
    				scanf("%d", &resposta);
   					fflush(stdin);
				   }
				} else if (resposta == 2){
					printf("\n\nEnt�o voc� decide finalmente ir embora do ponto de �nibus.");
					Sleep(3000);
					printf("\n\nVoc� observa o caminho, as casas, os com�rcios fechados e tudo parece t�o deserto.");
					Sleep(4000);
					printf("\n\nDepois de 10 minutos de caminhada, voc� ouve um barulho distante.");
					Sleep(4000);
					printf("\n\nEsse barulho parece se aproximar. Cada vez mais.");
					Sleep(4000);
					printf("\n\nVoc� decide finalmente olhar para tr�s.");
					Sleep(4000);
					printf("\n\nO �nibus passa por voc� com velocidade. Voc� sente um vento gelado e v�, aos poucos, o �nibus sumindo na dist�ncia.");
					Sleep(5000);
				}
			} else if (resposta == 2){
				printf("\n\n[%s]: Sim. Os �nibus costumam demorar por aqui.", nome);
				Sleep(3000);
				printf("\n\n[ESTRANHO]: Voc� conhece a regi�o?");
				Sleep(3000);
				printf("\n\nParece que sua mem�ria n�o est� t�o vazia quanto antes. Voc� olha para a rua e reconhece alguns pontos: um bar, um mercado com uma placa de neon, algumas �rvores...");
				Sleep(4000);
				printf("\n\n[%s]: Um pouco. Se bem me lembro, sim.", nome);
				Sleep(4000);
				printf("\n\nNenhuma resposta.");
				Sleep(3000);
				printf("\n\nPara algu�m que mal conversa com as pessoas, esse di�logo foi bem profundo.");
				Sleep(3000);
				printf("\n\nFinalmente, o rel�gio marca 22h. Por�m, nada de �nibus. A rua est� vazia.");
				Sleep(3000);
				printf("\n\nO que voc� faz?");
				printf("\n[1] Continuar esperando\n[2] Ir a p�\n[3] Conversar com o velho\n");
    			printf("-------\n>> ");
    			scanf("%d", &resposta);
   				fflush(stdin);
   				while (resposta == 1){
   					printf("\n\nVoc� espera mais um pouco.");
   					Sleep(5000);
   					printf("\n\nNenhum �nibus a vista. A rua continua vazia.");
   					Sleep(2000);
   					printf("\n\nO que voc� faz?");
					printf("\n[1] Continuar esperando\n[2] Ir a p�\n[3] Conversar com o velho");
    				printf("-------\n>> ");
    				scanf("%d", &resposta);
   					fflush(stdin);
				   }
				if (resposta == 3){
					printf("\n\nVoc� olha novamente para o lado. No entanto, dessa vez, o velho n�o est� mais l�.");
					Sleep(2000);
					printf("\n\nPara onde ele foi?");
					Sleep(2000);
					printf("\n\nO que voc� faz?");
					printf("\n[1] Continuar esperando\n[2] Ir a p�\n");
    				printf("-------\n>> ");
    				scanf("%d", &resposta);
   					fflush(stdin);
   					while (resposta == 1){
   					printf("\n\nVoc� espera mais um pouco.");
   					Sleep(5000);
   					printf("\n\nNenhum �nibus a vista. A rua continua vazia.");
   					Sleep(2000);
   					printf("\n\nO que voc� faz?");
					printf("\n[1] Continuar esperando\n[2] Ir a p�\n");
    				printf("-------\n>> ");
    				scanf("%d", &resposta);
   					fflush(stdin);
				   }
				} else if (resposta == 2){
					printf("\n\nEnt�o voc� decide finalmente ir embora do ponto de �nibus.");
					Sleep(3000);
					printf("\n\nVoc� observa o caminho, as casas, os com�rcios fechados e tudo parece t�o deserto.");
					Sleep(4000);
					printf("\n\nDepois de 10 minutos de caminhada, voc� ouve um barulho distante.");
					Sleep(4000);
					printf("\n\nEsse barulho parece se aproximar. Cada vez mais.");
					Sleep(4000);
					printf("\n\nVoc� decide finalmente olhar para tr�s.");
					Sleep(4000);
					printf("\n\nO �nibus passa por voc� com velocidade. Voc� sente um vento gelado e v�, aos poucos, o �nibus sumindo na dist�ncia.");
					Sleep(5000);
					printf("\n\n\"Ser� que o �nibus passou s� porque eu sa� do ponto?\"");
					Sleep(3000);
					printf("\n\n\"Se eu tivesse esperado... ele passaria do mesmo assim?\"");
					Sleep(3000);
					printf("\n\n\"Nesse mesmo hor�rio?\"");
					Sleep(3000);
					printf("\n\nEnfim, agora ele j� foi embora.");
					Sleep(3000);
					printf("\n\nVoc� continua andando pela rua. Voc� n�o sente mais medo. O c�u banhado pelo luar � imenso. A lua est� incr�vel esta noite e at� algumas estrelas podem ser vistas.");
					Sleep(4000);
					printf("\n\nPor algum motivo, voc� come�a a reparar em todos os detalhes que comp�em aquele lugar. A ilumina��o amarela dos postes, as casas (algumas delas com luzes acesas), as �rvores, as placas de tr�nsito, a dist�ncia...");
					Sleep(5000);
					printf("\n\nVoc� tenta conter em si mesmo todos esses detalhes. S�o muitos, mas por alguma raz�o inexplic�vel, todos parecem caber. A sensa��o � de paz. A aus�ncia de pessoas ou carros j� n�o te incomoda mais.");
					Sleep(4000);
					printf("\n\nPor quanto tempo voc� passou sem notar? Quanto tempo voc� passou preso aqui dentro? Dentro da sua pr�pria mente. E deixou de lado toda a realidade que te circunda e te envolve o tempo todo?");
					Sleep(5000);
					printf("\n\n(...)");
					Sleep(5000);
					printf("\n\nL� longe, capturado pelo seu olhar, voc� v� algo brilhante.");
					Sleep(3000);
					printf("\n\nVoc� n�o sabe o que �, mas ainda assim, parece te chamar.");
					Sleep(4000);
					printf("\n\nAos poucos, as mem�rias come�am a aparecer. Voc� se lembra de tudo e de todos, lentamente: o porqu� estava naquele ponto, o trajeto de volta para casa...");
					Sleep(5000);
					printf("\n\nPor um breve instante, voc� se lembra das pessoas mais queridas na sua vida e da sua fam�lia. O sentido da sua vida. Todo o resto parece s� um sonho estranho.");
					Sleep(5000); 
                    printf("\n\nVoc� se lembra de todas essas coisas e esbo�a um sorriso. \"Agora tudo est� bem.\"");
                    Sleep(4000);
                    printf("\n\n=============FIM===============");
				}
			} else if (resposta == 3){
				printf("\n\nSair correndo? Hmm. Se voc� continuar pensando, n�o sair� do lugar...");
				Sleep(4000);
				printf("\n\nV�! Corra! N�o fique conversando comigo.");
				Sleep(3000);
				printf("\n\nVoc� d� um passo t�mido enquanto ganha coragem para sair disparado.");
				Sleep(2000);
				printf("\n\n[ESTRANHO]: N�o se preocupe. Uma hora o �nibus passar�.");
				Sleep(3000);
				printf("\n\nVoc� para por um instante.");
				Sleep(3000);
				printf("\n\n\"Ele � s� um velho no final das contas\", voc� pensa");
				Sleep(3000);
				printf("\n\nVoc� volta o passo e, quando se vira, n�o h� mais ningu�m l�.");
				Sleep(3000);
				printf("\n\nPara onde ele foi?");
			} 
            /* ==================== GUSTAVO FIM ===================== */
            break;
        case 2:
            /* ==================== JOAO START ===================== */
            
            Sleep(2000);
            printf("\nCerto. Mas, para onde voc� quer ir a p�? E se o �nibus chegar pouco tempo depois de voc� partir?");
            Sleep(1000);
            printf("\n[1] Ir para casa\n[2] Ir para um restaurante\n");
            printf("-------\n>> ");
            scanf("%d", &destination);
            fflush(stdin);
            while (destination != 1 && destination != 2){
                printf("\nPor favor, escolha uma das op��es\n");
                printf("-------\n>> ");
                scanf("%d", &destination);
                fflush(stdin);
            }
            Sleep(2000);

            printf("\nOk. Mas de qualquer forma teremos que seguir por essa estrada. Ent�o vamos?\n");
            Sleep(2000);
            printf("\n(Algu�m come�a a se aproximar de voc�, essa pessoa estaria ali no mesmo ponto h� um tempo, te observando... N�o posso nem dizer se � mesmo um humano.\n"); 
            Sleep(3000);
            printf("\n[ESTRANHO]: Ol�. O que voc� est� fazendo parado olhando para o c�u? At� parece que voc� est� conversando consigo mesmo dentro da sua mente...\n");
            Sleep(4000);

            printf("\nCara, vamo s� ignor�-lo e sair andando. Estranhos a essa hora da noite. Isso n�o � um bom sinal.\n");
            Sleep(4000);

            printf("\n(Esse estranho, estranhamente, come�a a te seguir...)\n");
            Sleep(2000);
            printf("\nE agora, %s? Esse louco est� nos seguindo. Ser� que ele quer nos roubar? Quero dizer, roubar voc�... N�o tem como algu�m roubar sua consci�ncia, n�o � mesmo?\n", nome);
            Sleep(3000);

            printf("\n[1] Pedir para ele parar de te seguir\n[2] Sair correndo\n");
            printf("-------\n>> ");
            scanf("%d", &resposta);
            fflush(stdin);
            Sleep(2000);

            if (resposta == 1){
                printf("\n[%s]: Qual foi carinha, por que voc� est� me seguindo? Preciso que voc� pare agora mesmo.\n", nome);
                Sleep(3000);
                printf("\n[ESTRANHO]: Opa, desculpe meu caro, eu s� estava intrigado, voc� parecia meio desligado olhando para o c�u...\n");
                Sleep(4000);
                printf("\n[%s]: Estava? Hmm. � acho que sou um pouco desligado mesmo. Ali�s, me desculpe. Achei que voc� queria me assaltar hahaha.\n", nome);
                Sleep(2000);
                printf("\n[ESTRANHO]: Mil desculpas, jovem. Se n�o importa que eu pergunte: para qual lugar voc� est� indo?\n");
                Sleep(2000);
                printf("\n[%s]: Ent�o, na verdade eu estava para pegar o �nibus, mas desisti e decidi seguir o caminho a p�. Um caminho... que n�o sei bem para onde me leva... Qual � o seu nome?\n", nome);
                Sleep(4000);
                printf("\n[ESTRANHO]: Entendo. O meu nome � Carlinhos, Carlinhos Sagan! Muito prazer, caro amigo %s\n", nome);
                Sleep(3500);
                printf("\n[%s]: C-como assim, como voc� sabe o meu nome?\n", nome);
                Sleep(3500);
                printf("\n[CARLINHOS]: HAHAHA, eu te conhe�o muito bem. Treinei com um mago h� algum tempo e agora possuo telepatia. S� estou brincando com voc�, filho. Eu vi no seu crach�. %s\n", nome);
                Sleep(3000);
                printf("\n[CARLINHOS]: Mas, me diga %s, voc� gosta de olhar para as estrelas?\n", nome);
                Sleep(3000);

                printf("\n[1] Sim, � t�o bonito e interessante.\n[2] N�o, nunca fui muito de reparar nelas.\n");
                printf("-------\n>> ");
                scanf("%d", &resposta);
                fflush(stdin);
                Sleep(2000);

                if (resposta == 1){
                    printf("\n[CARLINHOS]: Eu tamb�m acho amigo. Sabe, � interessante como n�s primatas formados por poeira estelar observamos os cosmos...\n");
                    Sleep(4000);
                    printf("\n[CARLINHOS]: � um tanto po�tico.. � como se n�s f�ssemos uma maneira do Cosmos conhecer a si mesmo!\n");
                    Sleep(6000);
                    printf("\n[CARLINHOS]: Enfim caro, %s. Eu queria poder conversar mais com voc�. Mas tenho que ir.\n", nome);
                    Sleep(4000);
                    printf("\n[CARLINHOS]: Diante da vastid�o do tempo e da imensid�o do universo, � um imenso prazer, para mim, dividir um planeta e uma �poca com voc�... At� mais!\n");
                    Sleep(7000);
                    printf("\nCaraca, que carinha maneiro, s� a presen�a dele j� me deixou mais feliz. E eu achando que ele ia me assaltar hahaha.\n");
                    Sleep(4000);
                    printf("\nAgora temos que ir, vamos! Se n�o vamos perder mais um epis�dio de Cosmos!\n");
                    Sleep(5000);
                    printf("\n==============FIM================\n");
                }
                else if (resposta == 2){
                    printf("\n[CARLINHOS]: Hm, isso � um tanto quanto comum. Com as responsabilidades e preocupa��es da vida, �s vezes deixamos de pensar sobre a nossa pr�pria exist�ncia.\n");
                    Sleep(5000);
                    printf("\n[CARLINHOS]: Mas me diga, voc� sabe quantas estrelas possuem no universo?\n");
                    Sleep(3000);
                    printf("\n[CARLINHOS]: Na verdade, uma mais f�cil, quantas estrelas possuem na nossa gal�xia?\n");
                    Sleep(4000);
                    printf("\n[1] 100 mil?");
                    printf("\n[2] 1 milh�o, talvez?");
                    printf("\n[3] Ou quem sabe 100 milh�es, ou at� mesmo 1 bilh�o?");
                    printf("\n[4] Ou ser� que a resposta est� na casa dos 100 bilh�es, centenas de bilhares?");
                    printf("-------\n>> ");
                    scanf("%d", &resposta);
                    fflush(stdin);
                    while (resposta != 4){
                        printf("\n[CARLINHOS]: Tente novamente, caro %s\n", nome);
                        printf("-------\n>> ");
                        scanf("%d", &resposta);
                        fflush(stdin);
                    }
                    printf("\n[CARLINHOS]: Exatamente! Incr�vel, n�o? Somos ao mesmo tempo t�o insignificantes e especiais.\n");
                    Sleep(5000);
                    printf("\n==============FIM================\n");
                }
                else {
                    printf("\nCaro jogador, a resposta era 1 ou 2. Como voc� � bur-- ops, quero dizer, como voc� errou o d�gito, deve reiniciar o jogo!\n");
                }
            }
            else if (resposta == 2){
                // SAIR CORRENDO
                printf("\nCorre, corre!!! Esse cara � DOID�O!\n");
                Sleep(2000);
                printf("\nAcho que conseguimos despistar ele, estamos bem!\n");
                Sleep(3000);
                printf("\nBom, ent�o vamos seguindo!\n");
                Sleep(3000);
                if (destination == 1){
                    // Casa
                    printf("\nJ� se passaram 30 minutos que estamos andando, acho que estamos perto de casa.\n");
                    Sleep(3000);
                    printf("\nEita, voc� t� vendo aquilo? Uma barraca de apostas. Se a gente acertar o n�mero, vamos ganhar 100 reais, que � o suficiente para um rod�zio de jap�nes hehe\n");
                    Sleep(5000);
                    printf("\nPor�m, se perdermos, vamos perder tamb�m 100 reais. O que voc� acha? Voc� quer ir l� tentar a sorte?\n");
                    Sleep(3000);

                    printf("\n[1] Sim.\n[2] N�o.\n");
                    printf("-------\n>> ");
                    scanf("%d", &resposta);
                    fflush(stdin);

                    if (resposta == 1){
                        int aposta;
                        printf("\n[APOSTADOR]: Ol�, seja bem-vindo. Escolha um n�mero de 1 a 10\n");
                        Sleep(3000);
                        printf("-------\n>> ");
                        scanf("%d", &aposta);
                        fflush(stdin);

                        // Random number
                        srand(time(NULL));  
                        int random_number = rand() % 10;

                        if (aposta == random_number){
                            printf("\n[APOSTADOR]: Voc� � o vencedor!!!! Tome, 100 reais!\n");
                            Sleep(3000);
                            printf("\nOBAAAAAAAAAAAAAAAA\n", nome);
                            Sleep(3000);
                            printf("\nJ� liga para a nossa m�e e avisa que sexta vamos ao rod�zio JAPA! hehe\n");
                            Sleep(3000);
                            printf("\n==============FIM================\n");
                        }
                        else {
                            printf("\n[APOSTADOR]: Infelizmente, n�o foi dessa vez! O n�mero sorteado foi: %d.\n", random_number);
                            Sleep(3000);
                            printf("\nAff, n�o acredito que perdemos 100 reais de besta. Depois dessa, vou pra casa assistir novela que eu ganho mais.\n");
                            Sleep(3000);
                            printf("\n==============FIM================\n");
                        }
                    }
                    else {
                        printf("\n� melhor n�o mesmo, n�o podemos perder essa grana. Temos que comprar o brownie ainda... Vamos para casa logo.\n");
                        Sleep(4000);
                        printf("\n(30 minutos se passaram e voc� chega em casa)\n");
                        Sleep(3000);
                        printf("\nOi m�eee! O que tem pra cum�?\n");
                        Sleep(3000);
                        printf("\n[M�E]: Oi %s, hoje vamos ter farofa de lasanha com rabo de peixe, e uma pitada de molho rosa.\n", nome);
                        Sleep(6000);
                        printf("\n[%s]: Obaaa! O meu favorito!!\n", nome);
                        Sleep(3000);
                        printf("\n==============FIM================\n");
                    }
                }
                else if (destination == 2){
                    // Restaurante
                    printf("\nAcho que a melhor op��o � o bar do Zeca, l� tem um prato feito de fil� de frango por 12 reais.\n");
                    Sleep(4000);
                    printf("\n(20 minutos se passam e voc� chega ao bar do Zeca)\n");
                    Sleep(4000);
                    printf("\n[%s]: Fala seu Zeca, beleza? Me v� um fil� de frango, por favor.\n", nome);
                    Sleep(4000);
                    printf("\n[ZECA]: Opa %s, como � que voc� 't�', tranquilo? Ent�o, infelizmente eu 't�' sem fil� de frango hoje, o G�ronimo comeu tudo.\n", nome);
                    Sleep(4000);
                    printf("\n[ZECA]: Mas se voc� quiser aqui eu tenho orelha de porco, pode ser?\n");

                    printf("\n[1] Claro, m� del�cia.\n[2] Putz Zeca, orelha de porco n�o d� n�o, vai dar m� dor de barriga nessa hora da noite.\n");
                    printf("-------\n>> ");
                    scanf("%d", &resposta);
                    fflush(stdin);
                    if (resposta == 1){
                        printf("\n(P�ssima escolha, 30 minutos depois deu uma dor de barriga que fez voc� passar o resto da noite no banheiro!)\n");
                        Sleep(4000);
                        printf("\n==============FIM================\n");
                    }
                    else if (resposta == 2){
                        printf("\nAinda bem que voc� n�o comeu aquilo. Coma em casa mesmo, vamos embora!\n");
                        Sleep(4000);
                        printf("\nAos poucos, as mem�rias come�am a aparecer. Voc� se lembra de tudo e de todos, lentamente: o porqu� estava naquele ponto, o trajeto de volta para casa...");
						Sleep(4000);
						printf("\nPor um breve instante, voc� se lembra das pessoas mais queridas na sua vida e da sua fam�lia. O sentido da sua vida. Todo o resto parece s� um sonho estranho.");
						Sleep(4000); 
                        printf("\nVoc� se lembra de todas essas coisas e esbo�a um sorriso. \"Agora tudo est� bem.\"");
                        Sleep(4000);
                        printf("\n\n==============FIM================\n");
                    }
                    else {
                        printf("\nCaro jogador, a resposta era 1 ou 2. Como voc� � burr-- ops, quer dizer, como voc� errou o d�gito, deve reiniciar o jogo!\n");
                    }
                }
            }
            else {
                printf("\nCaro jogador, a resposta era 1 ou 2. Como voc� � burr-- ops, quer dizer, como voc� errou o d�gito, deve reiniciar o jogo!\n");
            }
            /* ==================== JOAO FIM ===================== */
            break;
        default:
            printf("\nDigite 1 ou 2 ou 3! Jogo deve ser reniciado!");
            break;
    }
}

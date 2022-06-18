#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

int main(int argc, char *argv[])
{		
  setlocale(LC_ALL, "Portuguese");
  char nome[12];
  printf("Ola.\n\n");
  printf("Como se chama?\n");
  printf("-------\n>> ");
  if (fgets(nome, 12, stdin))
  {
     nome[strcspn(nome, "\n")] = 0;
     Sleep(500);
	 printf("\n� um prazer estar voc�, %s", nome);
  }
  Sleep(1000);
  printf("\n\nNa verdade, isto foi apenas um teste. N�s j� nos conhecemos, %s", nome);
  printf("\n\nAfinal, eu sou sua consci�ncia.");
  Sleep(1000);
  printf("\n\nVamos l�. Deixe eu explicar a situa��o: seu rel�gio marca 21h37. Voc� est� em p�, esperando em um ponto de �nibus j� faz algum tempo. O ponto fica em uma rua que voc� n�o conhece bem.");
  printf("\n\nO que voc� faz?");
  char resposta[1];
  printf("\n[1] Esperar pelo �nibus.\n[2] Ir a p�\n[3] N�o estou entendendo nada.");
  fgets(resposta, 1, stdin);
  int valresposta = atoi(resposta);
  switch (valresposta)
  {
    case 1:
    printf("\nHmm. Voc� n�o sabe quanto tempo pode ficar esperando pelo �nibus. Talvez algumas horas. Ali�s, voc� n�o conhece bem o lugar.");
    break;
    case 2:
    printf("\nCerto. Mas, para onde voc� quer ir a p�? E se o �nibus chegar pouco tempo depois de voc� partir?");
    break;
    case 3:
    printf("\n");
    break;
    default:
    printf("\nN�o entendi o que voc� quis dizer com isso.");
	}
  }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

int main(int argc, char *argv[])
{		
  setlocale(LC_ALL, "Portuguese");
  char nome[12];
  printf("Olá.\n\n");
  printf("Como se chama?\n");
  printf("-------\n>> ");
  if (fgets(nome, 12, stdin))
  {
     nome[strcspn(nome, "\n")] = 0;
     Sleep(500);
	 printf("\nÉ um prazer estar você, %s", nome);
  }
  Sleep(1000);
  printf("\n\nNa verdade, isto foi apenas um teste. Nós já nos conhecemos, %s", nome);
  printf("\n\nAfinal, eu sou sua consciência.");
  Sleep(1000);
  printf("\n\nVamos lá. Deixe eu explicar a situação: seu relógio marca 21h37. Você está em pé, esperando em um ponto de ônibus já faz algum tempo. O ponto fica em uma rua que você não conhece bem.");
  printf("\n\nO que você faz?");
  char resposta[1];
  printf("\n[1] Esperar pelo ônibus.\n[2] Ir a pé\n[3] Não estou entendendo nada.");
  fgets(resposta, 1, stdin);
  int valresposta = atoi(resposta);
  switch (valresposta)
  {
    case 1:
    printf("\nHmm. Você não sabe quanto tempo pode ficar esperando pelo ônibus. Talvez algumas horas. Aliás, você não conhece bem o lugar.");
    break;
    case 2:
    printf("\nCerto. Mas, para onde você quer ir a pé? E se o ônibus chegar pouco tempo depois de você partir?");
    break;
    case 3:
    printf("\n");
    break;
    default:
    printf("\nNão entendi o que você quis dizer com isso.");
	}
  }

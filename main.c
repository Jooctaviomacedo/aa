#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, opcao, opcao1, opcao3, user;

  char usuario[10], usuario1[10], senha[8], senha1[8], email[20], telefone[11];
  float menu[60];

  printf("Primeira vez aqui?: \n");
  printf("Por Favor, faça um pequeno cadastro antes: \n");
  printf("\n");
  printf("Nome de Usuario: \n");
  scanf("%s", usuario);
  printf("senha do Usuario: \n");
  scanf("%s", senha);
  printf("Nome de email: \n");
  scanf("%s", email);
  printf("Nome de telefone: \n");
  scanf("%s", telefone);
  printf("\e[1;1H\e[2J");

  printf("Usuario: \n");
  scanf("%s", usuario1);
  printf("Digite a Senha: ");
  scanf("%s", senha1);
  printf("\e[1;1H\e[2J");

  if (strcmp(usuario, usuario1) == 0 && strcmp(senha, senha1) == 0) {

    printf("\n\n\t\tBem-vindo, %s!", usuario);
    printf("\n");
    printf("--------------------------------\n");
    printf("\n");
    printf("1- Minhas Informações\n");
    printf("2- Alterar Informações\n");
    printf("3- Sair\n");
    scanf("%d", &opcao1);
    printf("\e[1;1H\e[2J");
    if (opcao1 == 1) {

      printf("________________\n");
      printf("|-    ====    -|\n");
      printf("|-  =-====-=  -|\n");
      printf("|- C--O__O--D -|\n");
      printf("|-  ---__---  -|\n");
      printf("|-    ----    -|\n");
      printf("----------------\n");
      printf("\n");
      printf("::Informações de Usuário::\n");
      printf("\n");
      printf("Nome do Usuario: %s\n", usuario);
      printf("E-mail: %s\n", email);
      printf("Telefone: %s\n", telefone);
      printf("\n");
      system("pause");
    }

    if (opcao1 == 2) {
      printf("::Alterar Informações de Usuário::\n");
      printf("\n");
      printf("Nome do Usuario: \n");
      scanf("%s", usuario);
      printf("senha: \n");
      scanf("%s", senha);
      printf("E-mail: \n");
      scanf("%s", email);
      printf("Telefone: \n");
      scanf("%s", telefone);

    } else {
      printf("Saindo....");
      exit(0);
    }

  }

  else {
    printf("\n\nDADOS INVALIDOS!\n\n");
  }
}
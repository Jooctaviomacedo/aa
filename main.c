#include <stdio.h>
#include <stdlib.h>

int main() {
  int login;
  char usuario[60], usuario1[60], senha[60], senha1[60], email[60],
      telefone[60];

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

  printf("Usuario: \n");
  scanf("%s", usuario1);
  printf("Digite a Senha: ");
  scanf("%s", senha1);

  if (strcmp(usuario, usuario1) == 0 && strcmp(senha, senha1) == 0) {

    printf("\n\n\t\tBem-vindo, %s!", usuario);
    printf("\n");
    printf("--------------------------------\n");
    printf("\n");
    printf("1- Minhas Informações\n");
    printf("2- Alterar Informações\n");
    printf("3- Sair\n");
    scanf("%s", login);

    switch (login) {
    case 1:

      while (login != 1) {
        switch (login) {
        case 2:

          printf("Nome do usuario: %s\n", usuario);
          printf("Senha: %s\n", senha);
          printf("E-Mail: %s\n", email);
          printf("Telefone: %s\n", usuario);
          return 0;
        }
      }
    }

  } else {

    printf("\n\nDADOS INVALIDOS!\n\n");
  }
}

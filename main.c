#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  char login[60], usuario[60], usuario1[60], senha[60], senha1[60], email[60],
      telefone[60];

  printf("Primeira vez aqui?: \n");
  printf("Por Favor, faça o cadastro: \n");
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

  if (usuario <= usuario1) {
    printf("Insira a senha");
    scanf("%s", senha1);
    if (senha <= senha1) {
      printf("Usuario: %s\n", usuario);
      printf("email %s\n", email);
      printf("telefone %s\n", telefone);
      return 0;
    } else {
      printf("senha incorreta");
    }
  } else {
    printf("usuario incorreto");
    return 0;
  }
}

#include <stdio.h>

int main() {
  char buffer[10];

  printf("Si prega di inserire il nome utente: ");
  scanf("%s", buffer);

  printf("Nome utente inserito: %s\n", buffer);

  return 0;
}

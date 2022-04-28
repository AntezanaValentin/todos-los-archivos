#include <stdio.h>

int main(int argc, char *argv[]) {

  char rta = argv[1][0];
  if (rta == '4') {
    printf("Correcto\n");
  } else if (rta == '3') {
    printf("Casi\n");
    } else {
      printf("Incorrecto\n");
    }
  return 0;
}

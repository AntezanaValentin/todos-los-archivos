#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  bool v = false;
  v = x < y < z || x > y > z;
  printf("%s\n", v? "verdadero" : "falso");
  return 0;
}

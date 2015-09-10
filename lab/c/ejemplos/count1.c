#include <stdio.h>

// cuenta los caracteres de la entrada
int main() {
  int c, nc;

  nc = 0;
  while ((c = getchar()) != EOF) {
    nc = nc + 1; // ++nc
  }

  printf("%d\n", nc);
  return 0;
}

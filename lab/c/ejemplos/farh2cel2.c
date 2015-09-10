#include <stdio.h>

int main() {

  int fahr;

  for (fahr=0; fahr<=300; fahr=fahr+20) {
    printf("%d\t%d\n", fahr, 5*(fahr-32)/9);
  }

  return 0;
}

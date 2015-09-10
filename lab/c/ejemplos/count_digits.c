#include <stdio.h>


int main() {
  int c, i;

  int ndigit[10];

  for (i = 0; i < 10; i = i + 1) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {

    if ( c >= '0' && c <= '9') {
      ++ndigit[c - '0'];
    }

  }

  //Muestra
  for (i = 0; i < 10; i = i + 1) {
    printf("%d -> %d\n", i, ndigit[i]);
  }


}

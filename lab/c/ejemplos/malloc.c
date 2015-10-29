#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  char *test, c;

  test = (char *)malloc(10); // 10 bytes

  for(i=0 , c='a'; i < 9; i++) {
    test[i] = c+i;
  }

  test[9]='\0';

  printf("Cadena: %s\n", test);

  free(test);
  return 0;
}

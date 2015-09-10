#include <stdio.h>

int main() { // primer intento
  int c;

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}

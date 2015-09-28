#include <stdio.h>

void swap(int* a, int *b);

int main() {
  int p, q;
  p = 4;
  q = 5;
  printf("Los valores de p y q antes de llamar a swap son %d y %d respectivamente\n", p, q);
  swap(&p, &q);
  printf("Los valores de p y q después de llamar a swap son %d y %d respectivamente\n", p, q);
}


void swap(int* a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
//fin-power OMIT

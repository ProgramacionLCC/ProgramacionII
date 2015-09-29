#include <stdio.h>              // OMIT

void swap2(int *a, int *b);     // OMIT

int main() {
  int p = 4, q = 5;
  
  swap2(&p, &q);                // HLint
  printf("p=%d q=%d\n", p, q);  // p=5 q=4, se intercambiaron!
 
  return 0;
}
//fin-main OMIT

void swap2(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
//fin-swap2 OMIT
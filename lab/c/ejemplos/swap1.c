#include <stdio.h>              // OMIT

void swap1(int a, int b);       // OMIT

int main() {
  int p = 4, q = 5;
  
  swap1(p, q);                  // HLinit
  printf("p=%d q=%d\n", p, q);  // p=4 q=5, no funcionó
 
  return 0;
}
//fin-main OMIT

void swap1(int a, int b) {
    int t;
    t = a;
    a = b;
    b = t;
}
//fin-swap1 OMIT


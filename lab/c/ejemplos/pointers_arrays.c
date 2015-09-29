#include<stdio.h>

int main(void) {	// OMIT
  int a[10] = {10,20,30,40,50,60,70,80,90,100};
  int *pa = &a[0];

  int i;
  for (i = 0; i < 10; i ++) {
    printf("%d\t%d\t%d\t%d\t%p\n", a[i], *(pa + i), *(a + i), pa[i], pa+i);
  }
  
  return 0;		// OMIT
}
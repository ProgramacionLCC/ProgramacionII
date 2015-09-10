#include <stdio.h>

#define IN  1
#define OUT 0

// cuenta todo! ;)
int main() {
  int c, nl, nw, nc, state;  // HLinit

  state = OUT; // HLinit
  nl = nw = nc = 0;  // HLinit

  while ((c = getchar()) != EOF) {
    nc = nc + 1;

    if (c == '\n') {
      nl = nl + 1;
    }

    if ( c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      nw = nw + 1;
    }
  }

  printf("%d %d %d\n", nl, nw, nc);
}

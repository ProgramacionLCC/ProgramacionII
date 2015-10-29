#include <stdlib.h>
#include <stdio.h>

struct node {
  int item;
  struct node *next;
};


int main(void) {
  struct node *primero, *segundo, *tercero;
  struct node *tmp;

  primero = (struct node *)malloc(sizeof(struct node));
  primero->item = 10;
  primero->next = NULL;

  segundo = (struct node *)malloc(sizeof(struct node));
  segundo->item = 20;
  segundo->next = NULL

  tercero = (struct node *)malloc(sizeof(struct node));
  tercero->item = 30;
  tercero->next = NULL;

  primero->next = segundo;
  segundo->next = tercero;
  


  for (tmp = primero; tmp != NULL; tmp = tmp->next) {
    printf("%d\n", tmp->item);
  }

  return 0;
}

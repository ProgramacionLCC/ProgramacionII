#include <stdio.h>

int my_strlen(char *str)
{
  char *p = str;

  while(*p != '\0')
    p++;
    
  return p - str;  
}
//fin-my_strlen OMIT

int main()
{
  char *s = "Soy una cadena";
  char arr[] = "Yo también";
  
  printf("La longitud de la cadena s es %d\n", my_strlen(s));
  printf("La longitud de la cadena arr es %d\n", my_strlen(arr));
  
  return 0;  
}


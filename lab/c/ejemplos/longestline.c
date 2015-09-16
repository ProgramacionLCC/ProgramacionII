#include <stdio.h>
#define MAXLINE 1000 /* Maxima longitud posible de linea */

int getnewline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
    int len, max;
    char line[MAXLINE]; /* linea actual */
    char longest[MAXLINE]; /* linea mas larga */
    max = 0;
    
    while ((len = getnewline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    
    if (max > 0) /* hay una linea */
        printf("%s", longest);
    
    return 0;
}
//fin-main OMIT

// getnewline: Lee una linea en el arreglo s, devuelve su longitud OMIT
int getnewline(char s[], int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    
    s[i] = '\0';
    return i;
}

// copy: Copia 'from' a 'to'; asume que to es suficientemente grande OMIT
void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
// fin-copy OMIT
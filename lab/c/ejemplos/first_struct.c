#include <stdio.h>

struct punto{
    int x;
    int y;
};
// fin-punto OMIT

struct rectangulo {
    struct punto a;
    struct punto b;
};
// fin-rect OMIT


int primerCuadrante(struct punto punto)
{
    return punto.x >= 0 && punto.y >= 0;
}
// fin-primerCuadrante OMIT

void subirUno(struct punto* punto)
{
    (*punto).y = (*punto).y + 1;
}
// fin-subirUno OMIT

void subirUno2(struct punto* punto)
{
  punto->y = punto->y + 1;
}
// fin-subirUno2 OMIT

int main()
{
  // def-punto OMIT
  struct punto p;
  p.x = 2;
  p.y = 3;
  
  printf("Las coordenadas del punto p son (%d,%d)\n", p.x, p.y);  
 
  if(primerCuadrante(p)){
    printf("El punto p está en el primer cuadrante.\n");
  }else{
    printf("El punto p NO está en el primer cuadrante.\n");   
  }
  
  subirUno(&p); 
  printf("Coordenadas del punto p después de aplicar subirUno = (%d,%d)\n", p.x, p.y);

  // def-rect OMIT
  struct punto p1, p2;
  p1.x = 4;
  p1.y = 5;
  
  p2.x = 2;
  p2.y = 1;

  struct rectangulo r;
  r.a = p1;
  r.b = p2;  
  
  return 0;
}
// fin-main OMIT

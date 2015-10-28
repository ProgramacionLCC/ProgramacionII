#include <stdio.h>

struct Punto{
    int x;
    int y;
};
// fin-punto OMIT

struct Rectangulo{
    struct Punto a;
    struct Punto b;
};
// fin-rect OMIT


int primerCuadrante(struct Punto punto)
{
    return punto.x >= 0 && punto.y >= 0;
}
// fin-primerCuadrante OMIT

struct Punto subirUno(struct Punto* punto)
{
    (*punto).y = (*punto).y + 1;
}
// fin-subirUno OMIT


int main()
{
  // def-punto OMIT
  struct Punto p;
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
  struct Punto p1, p2;
  p1.x = 4;
  p1.y = 5;
  
  p2.x = 2;
  p2.y = 1;

  struct Rectangulo r;
  r.a = p1;
  r.b = p2;  
  
  return 0;
}
// fin-main OMIT
#include <stdio.h>
#include <math.h>

int main() {

  int valor_em_gigas = 10;

  double valor_em_bytes = valor_em_gigas * pow(1024, 3);

  printf("o valor %d em gigabytes equivale a %f bytes\n", valor_em_gigas, valor_em_bytes);



  



  return 0;
}
#include <stdio.h>
#include <math.h>

int main() {

  double a = -1, b = 2, c = 2;
  double delta, descriminante, x1, x2;

  delta = pow(b,2) - 4 * a * c;


  x1 = (- b + sqrt(delta)) / 2 * a;
  x2 = (- b - sqrt(delta)) / 2 * a; 
  
printf("o valor de x1 é: %f o valor de x2 é: %f", x1, x2);
  


  return 0;
}
/******************************************************************************

                        calculadora area do triangulo em c

*******************************************************************************/

#include <stdio.h>

int main()
{
    double area;
    double base;
    double altura;
   
    printf("Insira a base do Triangulo: ");
    scanf("%lf", &base);
    
    printf("Insira a altura do Triangulo: ");
    scanf("%lf", &altura);
    
    area = base * altura / 2;
    
    printf("A Aréa do Triangulo é: %.2lf\n", area);
    
    return 0;
}

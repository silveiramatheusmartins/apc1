/******************************************************************************

                            programa em c

*******************************************************************************/

#include <stdio.h>

int main()
{
    double perimetro;
    int raio;
    double pi = 3.141592;
   
    printf("Insira o raio da pizza: ");
    scanf("%d", &raio);
    
    
    perimetro = 2 * pi * raio;
    
    printf("o perimetro da pizza é: %.2lf\n", perimetro);
    
    return 0;
}

#include <stdio.h>

int main()
{
    
    #define ICMS1 0.17f
    #define COFINS1 0.76f
    #define PIS1 0.0165f
    
    
    
    printf("Insira o valor do produto: ");
    
    float preco_produto;  
    scanf("%f", &preco_produto);
    float ICMS = preco_produto * ICMS1;
    float COFINS = preco_produto * COFINS1;
    float PIS = preco_produto * PIS1;
    float precofinal;
    float precoinicial;
    
    
    
    
    
    precofinal = (1 + ICMS1 + COFINS1 + PIS1) * preco_produto;
    
    printf("o valor do imposto sobre o produto é: %.2lf\n", precofinal);
    
    printf("o valor do imposto ICMS sobre o produto é: %.2lf\n", ICMS);
    printf("o valor do imposto COFINS sobre o produto é: %.2lf\n", COFINS);
    printf("o valor do imposto PISPaset sobre o produto é: %.2lf\n", PIS);
    
    
    
    return 0;
    
}

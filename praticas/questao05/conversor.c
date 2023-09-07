#include <stdio.h>

int main() {
    double gigabytes, bytes;

    // Solicita ao usuário que digite o valor em gigabytes
    printf("Digite a quantidade de gigabytes: ");
    scanf("%lf", &gigabytes);

    
    bytes = gigabytes * 1024 * 1024 * 1024;

    // Exibe o resultado
    printf("%.2lf gigabytes equivalem a %.0lf bytes.\n", gigabytes, bytes);

    return 0;
}
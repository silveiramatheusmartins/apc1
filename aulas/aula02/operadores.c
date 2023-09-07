#include <stdio.h>

int main() {

//operador de atribuicao 
  int valor = 10;
  valor = 20;
  
  //operadores aritmeticos + - x /
  int soma = 10 + 2;
  int subtração = 10 -2;
  int multiplicacao = 10 *2;
  int divisao = 10 / 2;
  int resto = 10 % 2;

  //operadores incremento e decremento 
  int decremento = ++soma; // soma + 1
  int decremento = --soma; // soma - 1
  int decremento = soma++; // soma + 1
  int decremento = soma--; // soma - 1

  // operadores relacionais
  int menor_que = 0 < 1;
  int menor_igual = 0 <= 1;
  int maior_que = 0 > 1;
  int maior_igual = 0 >= 1;
  int igual = 0 ==1;
  int diferent = 0 != 1;

// operadores logicos 
int e = 0 < 1 && 1 < 10; // 0 < 1 < 10
int ou = 0 < 1 || 1 > 10 // 0 < 1, 1 > 10
int nao = !0; // !0 = 1, !1 =0
  
  return 0;
}
# include <stdio.h>

int main(){

// Operadores de atribuição#################################

// declaração de variaveis

int numero1 = 5, numero2, resultado;

// Iniciou a variavel resultado com 20
resultado = 20;

printf("O resultado é: %d \n", resultado); // imprimiu o resultado com o valor setado de 20

// usando o operador de atribuição de soma para somar + 20 a variavél resultado que já tinha o valor 20 isso equivale a: resultado = resultado + 20

resultado += 20;

printf("O resultado é: %d \n", resultado);

// usando o operador de atribuição de subtração para diminuir o valor da variavel resultado pelo o da variavel numero1, a variavél resultado que já tinha o valor 40 isso equivale a: resultado = resultado - numero1

resultado -= numero1;
printf("O resultado é: %d \n", resultado);// o resultado é 35 porque resultado está com valor 40 e foi subtraido pela variavel numero1 que tem valor 5

// operador de atribuição de multiplicação agora está atribuindo o valor de 10x o valor da variavel resultado isso equivale a: resultado = resultado * 10

resultado *= 10;
printf("O resultado é: %d \n", resultado);

//operador de atribuição de divisão agora está atribuindo o valor de / 10 o valor da variavel resultado isso equivale a: resultado = resultado / 5

resultado /= 5;
printf("O resultado é: %d \n", resultado);



}
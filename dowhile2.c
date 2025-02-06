#include <stdio.h>
#include <time.h>



int main(){

int numsecret = (rand () % 10) + 1;
int num = 0;

    do {
    
    //Do while é para ser usado quando se precisa testar a condição pelo menos uma vez: No caso já vai começar fazendo o que está pedindo no comando "Do" o if testa a condição do numero digitado com o numero secreto ele vai fazer a repetição enquento o teste for verdadeiro

    printf("Adivinhe o número secreto: ");
    scanf("%d", &num);

    if(num!= numsecret){

        printf("Número Errado, Tente novamente!!! \n");

    }


    } while (num!= numsecret);


    printf("Parabéns você acertou o número secreto");
    
    


return 0;



}
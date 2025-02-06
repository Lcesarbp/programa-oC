int main(){

int numsecret = 8;
int num = 0;

    do {

    printf("Adivinhe o número secreto: ");
    scanf("%d", &num);

    if(num!= numsecret){

        printf("Número Errado, Tente novamente!!! \n");

    }


    } while (num!= numsecret);


    printf("Parabéns você acertou o número secreto");
    
    


return 0;



}
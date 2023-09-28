#include <stdio.h>
#include <stdlib.h>


int main(){
    int num = 0;
    while(1){
        printf("Digite um numero par maior que 2: ");
        scanf("%d",&num);
        if(num>2 && num%2==0){
            goldbach(num);
        }
        else{
            printf("Digite outro numero. \n");
        }
        printf("\n");
    }
    return 0;
}

int primo(int n){
    int ver = 1;
    for (int j = 2; n/2 > j; j++)
    {
        if((n%j) == 0){
            return ver-1;
        }
    }
    return ver;
}



int goldbach(int g){
    int i = 2;

    for (int j = g-i; j > 2; j--)
    {
        if(primo(i) == 1 && primo(j) == 1)
        {
            printf("%d = %d + %d\n",g,i,j);
            break;
        }
        i++;
    }
}
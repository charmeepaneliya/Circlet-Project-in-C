#include<stdio.h>

int main(){

    int num=20;
    int n = 11;

    for(int i=1;n<=num;i++){

        for(int j=1;j<=i;j++){
           
            if(n<=num){
                printf("%d\t", n);
                n++;
            }
        }
        printf("\n");
    }

    return 0;
}
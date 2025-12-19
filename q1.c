#include<stdio.h>

int main(){

    int num=45;

    for(int i=41;i<=num;i++){

        for(int j=41;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }

    return 0;
}
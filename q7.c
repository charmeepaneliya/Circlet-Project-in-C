#include<stdio.h>

int main(){

    int rows=5;
    int cols=5;

    for(int i=1;i<=rows;i++){
        if(i==1 || i==3){
            for(int j=1;j<=cols;j++){
                printf("* ");
            }
        }

        else if(i==2){
            for(int j=1;j<=cols;j++){
                if(j==1 || j==cols)
                    printf("* ");

                    else

                    printf("  ");
                
             }
        }
        else{
            printf("*");
        }
         printf("\n");
    }
    return 0;
}
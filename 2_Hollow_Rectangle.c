#include <stdio.h>

int main(){

    int row, column;
    scanf("%d %d",&row,&column);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            if((i>=2 && i<=row-1) && (j>=2 && j<=column-1)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
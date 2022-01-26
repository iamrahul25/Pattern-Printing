#include <stdio.h>

int main(){

    int row, column;
    scanf("%d %d",&row,&column);

    for(int i=1; i<=row; i++){
        for(int j=0; j<=column; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
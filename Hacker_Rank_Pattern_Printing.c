#include <stdio.h>

int max(int a, int b){
    int max;
    (a>=b) ? (max=a) : (max=b);
    return max;
}

int min(int a, int b){
    int min;
    (a<=b) ? (min = a): (min = b);
    return min;
}

int valuemin(int n, int i){
    int num = (n+1) - i;
    return num;
}

int valuemax(int n, int i){
    int x = (2*n) - i;
    int num = (n+1) - x;
    return num;
}

int main(){

    int n;
    scanf("%d",&n);

    int times = (2*n)-1;

    for(int i=1; i<=times; i++){
        for(int j=1; j<=times; j++){
            int number = max(valuemin(n,min(i,j)),valuemax(n,max(i,j)));
            printf("%d ",number);
        }
        printf("\n");
    }

    return 0;
}
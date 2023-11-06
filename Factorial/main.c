#include<stdio.h>

int main(){
    int exponent;
    int number;

    printf("Input Number and exponent:\n");
    scanf("%d",&number);
    scanf("%d",&exponent);
    int result = 1;

    for(int i = 1; i <= exponent;i++){
        result = result *number;
    }

    printf("%d",result);
}
#include <stdio.h>

int main() {
    int num;
    printf("Enter your number:\n");
    scanf("%d",&num);

    if(num%91==0){
        printf("divisible");
    }
    else{
        printf("Not divisible");
    }
    return 0;
}
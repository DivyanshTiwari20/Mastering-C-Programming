//  Write a program to find whether a year entered by the user is a leap year or not. 
// Take year as an input from the user.

#include <stdio.h>

int main() {

    int yr;
    printf("Enter the year:\n");
    scanf("%d", &yr);

    if(yr%4==0){
        printf("It is a leap year!!");
    }else{
        printf("It isn't a leap year!!");
    }

    return 0;
}
// Write a program to sum first ten natural numbers using while loop.

/*
#include <stdio.h>
int main() {
    int sum=0;
    int num =1;

    while (num<=10){
        sum=sum+num;
        num=num+1;
    }

    printf("The sum of the first 10 natural number is %d",sum);
    return 0;
}

*/

// ** Using for loop:

#include <stdio.h>

int main() {
    int sum=0;
    int num=1;
    for (int num=1; num<=10;){
        sum= sum+num;
        num=num+1;
    }

    printf("The sum of the first 10 natural number is %d",sum);

    return 0;
}
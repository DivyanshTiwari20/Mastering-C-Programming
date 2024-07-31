#include <stdio.h>

int main() {
    float principle, rate, time;

    printf("Enter you principle:\n");
    scanf("%f",&principle);
    printf("Enter you rate:\n");
    scanf("%f",&rate);
    printf("Enter you time:\n");
    scanf("%f",&time);

    printf("The simple interet is %.2f",(principle*rate*time)/100);
    return 0;
}
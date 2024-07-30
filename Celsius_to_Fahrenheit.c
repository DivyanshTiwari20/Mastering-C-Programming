#include <stdio.h>

int main() {
    float celsius;

    printf("Enter the temperature in Celsius: \n");
    scanf("%f",&celsius);

    printf("The ans is %.2f",(celsius * 9 / 5) + 32);
    return 0;
}
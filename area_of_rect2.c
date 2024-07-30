#include <stdio.h>
// Input supplied by User

int main(){
    int length, breath ;
    
    printf("Enter length:\n");
    scanf("%d", &length);

    printf("Enter breath:\n");
    scanf("%d", &breath);

    printf("the area of rectangle is %d", length*breath);
    return 0;
}

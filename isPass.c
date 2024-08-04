// Write a program to determine whether a student has passed or failed. To pass, a 
// student requires a total of 40% and at least 33% in each subject. Assume there 
// are three subjects and take the marks as input from the user.

#include <stdio.h>

int main() {
    float mark1, mark2, mark3, total_percentage;

    printf("Enter you mark for first subject:\n");
    scanf("%f",&mark1);
    printf("Enter you mark for second subject:\n");
    scanf("%f",&mark2);
    printf("Enter you mark for third subject:\n");
    scanf("%f",&mark3);

    total_percentage= (mark1+mark2+mark3)/3;

    if (mark1>=33 &&  mark2>=33 && mark3>=33 && total_percentage >=40){
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry, you have failed.\n");
    }


    printf("Your total percentage is %.2f%%\n", total_percentage);    
    return 0;
}
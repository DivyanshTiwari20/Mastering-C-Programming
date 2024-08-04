// Calculate income tax paid by an employee to the government as per the slabs 
// mentioned below: 
//                 Income Slab                       Tax  
//                 2.5 – 5.0L                         5% 
//                 5.0L - 10.0L                       20% 
//                 Above 10.0L                         30% 
// Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include <stdio.h>

int main() {

    float income;

    printf("Enter your annual income in lakhs(L):\n");
    scanf("%f", &income);

    if(income<2.5){
        printf("There is no tax for you!!");
    }else if (income>=2.5)
    {
        printf("You have to pay a tax of %.2f",(income*100000)*5/100);
    }
    else if (income>=5.0){
        printf("You have to pay a tax of %.2f",(income*100000)*20/100);
    }
    else if (income>=10.0){
        printf("You have to pay a tax of %.2f",(income*100000)*30/100);
    }
    
    return 0;
}
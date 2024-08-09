// Calculate income tax paid by an employee to the government as per the slabs 
// mentioned below: 
//                 Income Slab                       Tax  
//                 2.5 – 5.0L                         5% 
//                 5.0L - 10.0L                       20% 
//                 Above 10.0L                         30% 
// Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include <stdio.h>

int main() {

    float income,tax=0.0;

    printf("Enter your annual income in lakhs(L):\n");
    scanf("%f", &income);

// Calculate tax based on the income slab
    if (income <= 250000) {
        tax = 0.0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (income - 500000) * 0.20 + 250000 * 0.05;
    } else {
        tax = (income - 1000000) * 0.30 + 500000 * 0.20 + 250000 * 0.05;
    }
    
    // Output the tax amount
    printf("The income tax to be paid is: Rs. %.2f\n", tax);
    
    return 0;


}
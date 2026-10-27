#include <stdio.h>

int main() {
    float units,total_bill;
    printf("Enter the total electricity units consumed: ");
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input. Units consumed cannot be negative.\n");
        return 1;
    }

    
    if (units <= 100) {
        total_bill = units * 1.50;
    } 
    else if (units <= 200) {
        total_bill = units * 2.50;
    } 
    else if (units <= 500) {
        total_bill = units * 4.00;
    } 
    else {
        total_bill = units * 6.00;
    }

    
    printf("\n--- Electricity Bill ---\n");
    printf("Units Consumed: %.2f\n", units);
    printf("Total Bill Amount: Rs. %.2f\n", total_bill);

    return 0;
}

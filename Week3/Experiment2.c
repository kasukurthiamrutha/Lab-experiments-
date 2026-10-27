#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;

    
    printf("Enter the Principal Amount: ");
    scanf("%lf", &principal);

    printf("Enter the Interest Rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the Time Period (in years): ");
    scanf("%lf", &time);

  
    amount = principal * pow((1 + rate / 100), time);

  
    compound_interest = amount - principal;

    
    printf("\nTotal Amount after %.2lf years: %.2lf\n", time, amount);
    printf("Calculated Compound Interest: %.2lf\n", compound_interest);

    return 0;
}

#include <stdio.h>

int main() {
    int choice;
    float temp, converted_temp;

    
    printf("--- Temperature Conversion Menu ---\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted_temp = (temp - 32.0) * 5.0 / 9.0;
        printf("%.2f Fahrenheit = %.2f Celsius\n", temp, converted_temp);
    } 
    else if (choice == 2) {
        
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted_temp = (temp * 9.0 / 5.0) + 32.0;
        printf("%.2f Celsius = %.2f Fahrenheit\n", temp, converted_temp);
    } 
    else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}

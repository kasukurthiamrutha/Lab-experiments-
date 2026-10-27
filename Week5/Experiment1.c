#include <stdio.h>

int main() {
  
    int marks[5];
    int i;
    
     
    float total = 0.0;
    float average;

  
    printf("Enter the marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        
        
        total += marks[i];
    }

    
  
    average = total / 5.0;

    
    printf("\n-------------------------\n");
    printf("Total Marks   = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("-------------------------\n");

    return 0;
}

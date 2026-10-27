#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;

    
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side a: ");
    scanf("%lf", &a);
    printf("Side b: ");
    scanf("%lf", &b);
    printf("Side c: ");
    scanf("%lf", &c);

  
    if ((a + b > c) && (b + c > a) && (a + c > b))  
    {
        s = (a + b + c) / 2.0;

      
        area = sqrt(s * (s - a) * (s - b) * (s - c));

      
        printf("\nThe semi-perimeter (s) = %.2lf\n", s);
        printf("The area of the triangle = %.2lf square units\n", area);
    } else {
        
        printf("\nError: The entered sides do not form a valid triangle.\n");
        printf("The sum of any two sides must be strictly greater than the third side.\n");
    }

    return 0;
}

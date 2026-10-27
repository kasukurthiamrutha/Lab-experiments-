#include <stdio.h>

int main() {
    float u, a, s;
    int t;

  
    printf("Enter initial velocity (u): ");
    scanf("%f", &u);

    printf("Enter acceleration (a): ");
    scanf("%f", &a);

    printf("Enter time (t): ");
    scanf("%d", &t);

    
    s = (u * t) + (a * t * t) / 2.0;

  
    printf("Distance travelled by the object = %.2f meters\n", s);

    return 0;
}

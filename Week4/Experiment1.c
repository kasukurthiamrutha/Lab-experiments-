#include <stdio.h>

int main() {
    // Variable declarations and initialization
    double A = 10.0, B = 5.0, C = 2.0, D = 4.0, E = 3.0, F = 6.0, G = 7.0;
    int i = 1;
    
    // Auxiliary variables to preserve original values for tokenized/increment expressions
    double a_val, b_val;
    int i_val;

    printf("--- Initial Values ---\n");
    printf("A = %.1f, B = %.1f, C = %.1f, D = %.1f, E = %.1f, F = %.1f, G = %.1f\n", A, B, C, D, E, F, G);
    printf("i = %d\n\n", i);

    // Expression a: A + B * C + (D * E) + F * G
    // Precedence: (D * E) first, then multiplications (*), then additions (+)
    double res_a = A + B * C + (D * E) + F * G;
    printf("a. Evaluation of A + B * C + (D * E) + F * G:\n");
    printf("   Result = %.2f\n\n", res_a);

    // Expression b: A / B * C - B + A * D / 3
    // Precedence: / and * (left-to-right), then + and - (left-to-right)
    double res_b = A / B * C - B + A * D / 3.0;
    printf("b. Evaluation of A / B * C - B + A * D / 3:\n");
    printf("   Result = %.2f\n\n", res_b);

    // Expression c: A+++B---A
    // Parsed by the compiler via maximal munch rule as: (A++) + (B--) - A
    a_val = A; 
    b_val = B;
    double res_c = (a_val++) + (b_val--) - a_val; 
    printf("c. Evaluation of A+++B---A [Tokenized as (A++) + (B--) - A]:\n");
    printf("   Result = %.2f (Using current values: %.1f + %.1f - %.1f)\n\n", res_c, 10.0, 5.0, 11.0);

    // Expression d: J = (i++) + (++i)
    // Note: Modifying 'i' multiple times without an intervening sequence point 
    // causes undefined behavior in standard C. The result depends on the compiler.
    i_val = i;
    int J = (i_val++) + (++i_val);
    printf("d. Evaluation of J = (i++) + (++i):\n");
    printf("   Result J = %d (Value depends heavily on compiler behavior due to sequence points)\n", J);

    return 0;
}

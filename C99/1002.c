#include <stdio.h>
 
int main() {
 
    double A, C; 
    C = 3.14159;
    
    scanf("%lf", &A);
    
    A= A*A;
    A= A*C;
    printf("A=%.4lf\n", A);
    
    
 
    return 0;
}

#include <stdio.h>
 
int main() {
 
    double n1, n2;
    
    scanf("%lf %lf", &n1, &n2);
    n1 = n1*3.5;
    n2 = n2*7.5;
    n1 = (n1+n2)/11;
    
    printf("MEDIA = %.5lf\n", n1);
 
    return 0;
}

#include <stdio.h>
 
int main() {
 
    float n1a1, n2a2, n3a3;
    
    scanf("%f %f %f", &n1a1, &n2a2, &n3a3);
    n1a1= n1a1*2;
    n2a2 = n2a2*3;
    n3a3 = n3a3*5;
    
    n1a1 = (n1a1 + n2a2 + n3a3)/10;
    printf("MEDIA = %.1f\n", n1a1);
 
    return 0;
}

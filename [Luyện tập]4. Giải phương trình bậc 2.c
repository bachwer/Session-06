#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    int delta;
    float x1, x2;
    printf("--quadratic--\n");
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Enter number c: ");
    scanf("%d", &c);
    
    if(a == 0){
        printf("        a = 0\nĐưa về phương trình bậc 1\n");
        x1 = (float)-c / b;
        printf("Một nghiệm duy nhất: %.2f\n ", x1);
        
    }else{
        delta = (b * b) - (4 * a * c);
    }
    
    if(delta > 0){
        x1 = (float)((-b - sqrt(delta)) / 2 * a);
        x2 = (float)((-b + sqrt(delta)) / 2 * a);
        printf("ngiệm 1: %.1f\n", x1);
        printf("ngiệm 2: %.1f\n", x2);
    }else if(delta == 0){
        x1 = (float)(-b / (2 * a));
        printf("nghiệm kép x1 = x = %.1f\n  ", x1);
    }else{
        printf("invalid\n");
    }
    
    
    
    return 0;
}









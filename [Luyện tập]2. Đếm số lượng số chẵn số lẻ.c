#include <stdio.h>

int main() {
    int a, b, c, num;
    
    printf("Enter your number: ");
    scanf("%d", &a);
    
    while(a > 0){
       num = a % 10;
       if(num % 2 != 0){
          b++;
       }else {
          c++;
       }
        a /= 10;
    }
    printf("Your numbers have %d odd number and %d even number", b,c);
    return 0;
}

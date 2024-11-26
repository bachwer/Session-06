#include <stdio.h>

int main() {
    int a, num, b = 0;
    
    printf("Enter your number: ");
    scanf("%d", &a);
    
    while(a > 0){
       num = a % 10;
       if(num % 2 != 0){
          b += num;
       }
        a /= 10;
    }
    printf("%d", b);
    return 0;
}

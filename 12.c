#include <stdio.h>

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    if (num == 0 || num < 0){
        printf("invalid");
    }
    
    long long next, f1 = 0, f2 = 1;
    printf("%d\n", f1);
    
    for(int i = 1; i < num; i++){
        next = f1 + f2;
        printf("%lld\n", next);
        f2 = f1;
        f1 = next;
    }
    
    return 0;
}

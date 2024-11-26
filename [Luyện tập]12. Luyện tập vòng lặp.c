#include <stdio.h>

int main() {
    int num;
    int n = 1;
    int fn2 = 1;
    int fn1 = 1;
    int fn3,fn4;
    printf("Enter your number: ");
    scanf("%d", &num);
    if(num >= 3){
        printf("0 1 1 ");
        n = 4;
    }else if(num >= 2){
        printf("0 1 ");
        n = 2;
    }else if(num >= 1){
        printf("0  ");
        n = 1;
    }else if(num == 0){
        printf(" ");
        return 1;
    }
    
    while(n <= num){
    fn3 = fn2 + fn1; 
    printf("%d ", fn3);
    if(n == num){
        break;
    }
    n++;
    
    fn4 =fn3 + fn2;  
    printf("%d ", fn4);
    if(n == num){
        break;
    }
    n++;
    fn2 = fn4;
    fn1 = fn3;

    }
    
    return 0;
}




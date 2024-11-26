#include <stdio.h>

int main() {
    int num;
    int n = 0;
    printf("Enter your number: ");
    scanf("%d", &num);
    printf("\n");
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
        n++;
        }
    }
    if(n == 2){
        printf("là số nguyên tố\n");
    }else{
        printf("không phải số nguyên tố\n");
    }
    
    return 0;
}




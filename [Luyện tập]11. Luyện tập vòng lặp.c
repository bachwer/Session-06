#include <stdio.h>

int main() {
    int num;
    int n = 0;
    int y;
    int z = 1;
    printf("Enter your number: ");
    scanf("%d", &num);
    
    while(z <= num){
        y = 0;
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
            y++;   
            }
        }
        if(y == 2){
            printf("%d ", n);
            z++;
        }
        n++;
    }
    return 0;
}




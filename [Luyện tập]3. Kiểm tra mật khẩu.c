#include <stdio.h>

int main() {
    int  pin, i = 5;
    int passPin = 8386;
    do{
    i--;    
    printf("Enter your Pin code: ");
    scanf("%d", &pin);
    
    if(pin == passPin){
        printf("True \n");
        return 1;
    }else{
        printf("--false--\nYou have %d more attempts\n", i);
    }
    
    }while(i > 0);
        printf("lock account");

    return 0;
}

#include <stdio.h>

int main() {
    int  months;
    float percent, amount;
    float change;
    printf("Enter your amount: ");
    scanf("%f", &amount);
    printf("Desired interest rate %: ");
    scanf("%f", &percent);
    printf("number of months: ");
    scanf("%d", &months);
    printf("\n");
    if(amount <= 0 || percent <= 0 || months <= 0){
        printf("!!invalid!!");
        return 1;
    }
    percent /= 100;
    for(int i = 0; i < months; i++){
        change = amount;
        change = percent * change;
        amount = amount + change;
    }
     printf("total: %.3f", amount );

    return 0;
}

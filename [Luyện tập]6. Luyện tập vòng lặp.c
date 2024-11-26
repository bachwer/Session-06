
#include <stdio.h>

int main() {
    for(int i = 1; i < 101; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz\n");
            continue;
        }else if(i % 5 == 0){
            printf("Buzz\n");
             continue;
        }else if(i % 3 == 0){
            printf("Fizz\n");
             continue;
        }
         printf("%d\n", i);
    }

    return 0;
}

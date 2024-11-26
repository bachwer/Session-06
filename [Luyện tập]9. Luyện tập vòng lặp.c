#include <stdio.h>

int main() {
    int am = 100,amf, num,num1,num3 = 0;
    amf = am;

    while( am < 1000){
        amf = am;
        num3 =0;
    for(int i = 1; i <= 3; i++){
        num = amf % 10;
        num1 = num * num * num;
        num3 += num1;
        amf /= 10;
      
    }
    if(num3 == am){
        printf("%d\n", num3);
    }
    am++;
    
    }
    return 0;
}




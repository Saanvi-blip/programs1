#include <stdio.h>
long long int power(int base, int exp) {
    if(exp==0){
        return 1;
    }
    else if(exp>0){
        return(long long int) base * power(base,exp-1);
    }
    else {
        return 1/((long long int) base * power(base,-exp-1));
    }
}

int main() {
    int base;
    int exp;
    long long int result;
    
    printf("enter the number: ");
    scanf("%d",&base);

    printf("enter the exponent: ");
    scanf("%d",&exp);

    result= power(base,exp);

    printf("%d raised to the power of %d is: %lld\n", base,exp,result);
    return 0;
}
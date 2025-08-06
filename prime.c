#include <stdio.h>
#include <math.h>

int main() {
    int number;

    printf("enter a number: ");
    scanf("%d", &number);
    if (isPrime(number))
        printf("prime number:", number);
    else
        printf("%d is not a prime number.\n", number);


    return 0;

}
#include <stdio.h>
int main() {
    int num,revnum=0,rem;
    printf("enter an integer: ");
    scanf("%d",&num);
    while(num!=0) {
        rem=num%10;
        revnum= revnum * 10 + rem;
        num/=10;
    }
    printf("reversed number is=%d\n", revnum);
    return 0;
}
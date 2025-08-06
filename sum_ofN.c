#include <stdio.h>
int SUM(int n) {
    if (n==0){
        return 0;
    }
    else{
        return n + SUM(n-1);
    }
}
int main() {
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    
    int result=SUM(num);
    printf("sum of natural numbers: %d\n",result);

    return 0;

}
#include <stdio.h>
int reversenumber(int num, int rev) {
    if (num==0){
        return rev;
    }
    return reversenumber(num / 10, rev * 10 + num % 10);
}
int ispalindrome(int num) {
    if (num<0)
        return 0;
    return num==reversenumber(num,0);
}
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    if (ispalindrome(n))
        printf("%d is palindrome.\n",n);
    else
        printf("%d is not palindrome.\n",n);

    return 0;   
}

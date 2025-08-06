#include <stdio.h>
int main() {
    char ch;
    printf("enter char: ");
    scanf("%c", &ch);

    if(ch>='0' && ch<='9'){
       printf("'%c' is a digit: ", ch); 
    }
    else if(ch>='A' && ch<='Z'){
        printf("'%c' is UPPERCASE letter: ", ch); 
    }
    else if(ch>='a' && ch<='z'){
        printf("'%c' is lowercase letter: ", ch); 
    }
    else {
        printf("'%c' is a special character: ", ch); 

    }
}

#include <stdio.h>
int main() {
    int n;
    int t1=0, t2=1;
    int term;
    
    printf("enter the num of terms: ");
    scanf("%d",&n);

    if(n<=0) {
        printf("enter positive term: ");
        return 1;
    } else if(n==1) {
        printf("%d\n",t1);
        
    } else {
        printf("%d\n",t1);
        printf("%d\n",t2);
       
    for (int i=3;i<=n;++i ) {
        term=t1+t2;
        printf("%d",term);
        t1=t2;
        t2=term;
        printf("\n");
        
     }
        
    }

    return 0;
}
#include <stdio.h>
#include <limits.h>
int main() {
    int arr[]={31,22,55,77,99,18};
    int n= sizeof(arr)/sizeof(arr[0]);

    if (n<2) {
        printf("array must contain at least 2 elements");
        return 1;
    }
    int largest = INT_MIN;
    int seclargest = INT_MIN;

    if (arr[0]>arr[1]) {
        largest = arr[0];
        seclargest = arr[1];
    } else {
        largest = arr[1];
        seclargest = arr[0];
    }    
    for (int i=2;i<n;i++) {
        if (arr[i]>largest){
            seclargest = largest;
            largest = arr[i];
        } else if (arr[i]>seclargest && arr[i]!= largest){
            seclargest = arr[i];
        }
    }
    if (seclargest == INT_MIN) {
        printf("No distinct second largest element found");
    } else {
        printf("The second largest element in the array is: %d\n", seclargest); 
    }
    return 0;

}
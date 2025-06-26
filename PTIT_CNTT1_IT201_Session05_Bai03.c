#include <stdio.h>
#include <stdlib.h>
int giaithua(int n) {
    if (n==1) {
        return 1;
    }
    return n * giaithua(n-1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<0) {
        printf("Number must be greater than zero\n");
    }
    int sum=giaithua(n);
    printf("%d\n", sum);
    return 0;
}
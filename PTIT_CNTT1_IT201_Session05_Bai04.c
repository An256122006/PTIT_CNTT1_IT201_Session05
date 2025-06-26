#include <stdio.h>
#include <stdlib.h>
int giaithua(int n, int f) {
    if (f==n) {
        return n;
    }
    return f + giaithua(n,f-1);
}
int main() {
    int n;
    printf("Enter a Firstnumber: ");
    scanf("%d", &n);
    int f;
    printf("Enter a Second number: ");
    scanf("%d", &f);
    if (n<0) {
        printf("Number must be greater than zero\n");
    }
    if (n>f) {
        printf("first number ko dc lon hon Second Number\n");
    }
    int sum=giaithua(n,f);
    printf("%d\n", sum);
    return 0;
}
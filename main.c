#include <stdio.h>
int printNumber(int n,int count) {
    if (count > n) {
        return 0;
    }
    printf("%d ",count);
    return printNumber(n,count+1);
}
int main(void) {
    int n;
    int count =1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printNumber(n,count);
    return 0;
}
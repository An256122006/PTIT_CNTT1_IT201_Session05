#include <stdio.h>
int printfibonaci(int n,int fn,int f2,int f1,int i) {
    if (i==n) {
        return 0;
    }
    fn=f1+f2;
    f2=f1;
    f1=fn;
    printf("%d ",fn);
    return printfibonaci(n,fn,f2,f1,i+1);
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n<0 || n==0) {
        printf("khong hop le");
    }
    if (n >= 1) printf("0 ");
    if (n >= 2) printf("1 ");
    int fn;
    int f1=1,f2=0;
    printfibonaci(n,fn,f2,f1,2);
}
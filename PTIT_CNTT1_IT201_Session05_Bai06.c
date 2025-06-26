#include <stdio.h>
#include <stdlib.h>
int sumarr(int *arr,int i,int n) {
    if (i==n) {
        return 0;
    }
    return arr[i]+sumarr(arr,i+1,n);
}
int main() {
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int sum=sumarr(arr,0,n);
    printf("%d",sum);
}

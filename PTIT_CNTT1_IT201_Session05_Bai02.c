int printNumber(int n,int count,int sum) {
    if (count > n) {
        printf("%d",sum);
        return 0;
    }
    sum +=count;
    return printNumber(n,count+1,sum);
}
int main(void) {
    int n;
    int count = 1;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printNumber(n,count,sum);
    return 0;
}
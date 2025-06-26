#include <stdio.h>
#include <string.h>
char daonguoc(char *str,int len,int i) {
    if (i>=len/2){return 1;}
     if (str[i]==str[len-1-i]) {
         return daonguoc(str,len,i+1);
     }else {
         return 0;
     }
}
int main() {
    char str[100];
    printf("Enter string\n");
    fgets(str,100,stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    printf("%s\n",str);
    if (daonguoc(str,len,0)) {
        printf("Yes\n");
    }else {
        printf("No\n");
    }
    return 0;
}
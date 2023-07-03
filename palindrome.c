#include<stdio.h>

int main(){
    int n,c,r,s=0;
    printf(" enter the number\n");
    scanf("%d",&n);
    c=n;

    while (n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;

    }
    if (c==s)
    {
        printf("it is a palindrome number");
    } else
    {
        printf("it is  not a palindrome number");
    }
     return 0;
}

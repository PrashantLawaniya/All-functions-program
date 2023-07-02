#include<stdio.h>
int sum(int a,int b);
int main(){
int a,b;
printf(" enter the number a\n");
scanf("%d",&a);
printf("enter the number b\n");
scanf("%d",&b);
printf(" Sum of %d and %d is %d",a,b,sum(a,b));
  return 0;
}
int sum(int a,int b)
 {
    return a+b;
 }
    

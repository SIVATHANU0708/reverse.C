#include<stdio.h>
int main()
{
int n,remain=0,reverse=0;
printf("enter the number:");
scanf("%d",&n);
while(n!='\0')
{
remain=n%10;
reverse=(reverse*10)+remain;
n=n/10;
}
printf("the reversed number is %d",reverse);
return 0;
}

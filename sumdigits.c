//c program to perform addition of digits
#include <stdio.h>
void main()
{
int i,n,sum=0,p;
printf("enter a no to find sum of digits");
scanf("%d",&n);
while(n>0)
{p=n%10;
sum=sum+p;
n=n/10;
}
printf("the sum of digits is %d",sum);
}



#include <stdio.h>
void main()
{
int i,n,sum=0,p;
printf("enter a no");
scanf("%d",&n);
while(n>0)
{p=n%10;
sum=sum+p;
n=n/10;
}
printf("%d",sum);
}



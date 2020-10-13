#include <stdio.h>
void main()
{
int temp,i,j,n,arr[10];
printf("enter limit of array\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);}
printf("array elements are\n");
for(i=0;i<n;i++)
{printf("%d\n",arr[i]);}
for(i=0;i<n;i++)
{for (j=0;j<n-i-1;j++)
if(arr[j]>arr[j+1])
{temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;}
}
printf("sorted array\n");
for(i=0;i<n;i++)
{printf("%d\n",arr[i]);}

}


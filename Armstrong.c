// Write a program in C to check whether the entered number is an Armstrong
// or perfect numbers using the function.
#include <stdio.h>
int Armstrong(int n)
{
    int p, sum, num;
    sum = 0;
    num = n;
    while(num!=0)
    {
        p = num % 10;
        sum += p*p*p;
        num = num/10;
    }
    return (n == sum);
}

int Perfect(int n)
{
    int i, sum, num;
    sum = 0;
    num = n;
    for(i=1; i<num; i++)
    {

        if(num%i == 0)
        {
            sum += i;
        }
    }
    return (n == sum);
}

int main()
{

    printf("Name: Merin Alex\nRoll no: 24\nBatch: S2 CSE B\n");
    int n;
    printf("Enter any number ");
    scanf("%d",&n);

    if(Armstrong(n))
    {
        printf("The %d is an armstrong number.\n",n);
    }
    else
    {
        printf("The %d is not an armstrong number.\n",n);
    }

    if(Perfect(n))
    {
        printf("The %d is a perfect number\n",n);
    }
    else
    {
        printf("The %d is not a perfect number\n",n);
    }
    return 0;
}

#include<stdio.h>

int factors(int n);

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int fact=factors(n);
    if(fact==0)
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}

int factors(int n)
{
    int f=0;
    for(int i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        f=f+1;
    }
    return f;
}
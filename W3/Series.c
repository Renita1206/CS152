#include<stdio.h>

int series(int a);

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("%d",series(n));
    return 0;
}

int series(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int fact=1;
        for(int j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact/i;
    }
    return sum;
}
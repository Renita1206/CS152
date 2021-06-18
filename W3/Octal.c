#include<stdio.h>

int oct(int a);

int main()
{
    int n,o;
    printf("Enter a number");
    scanf("%d",&n);
    o=oct(n);
    printf("%d",o);
    return 0;
}

int oct(int n)
{
    int o=0,k=1;
    while(n>0)
    {
        int d=n%8;
        o=d*k+o;
        k=k*10;
        n=n/8;
    }
    return o;
}
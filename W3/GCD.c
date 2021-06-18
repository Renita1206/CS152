#include<stdio.h>

int gcd(int m, int n);

int main()
{
    int a,b,c;
    printf("Enter 3 numbers:  ");
    scanf("%d %d %d",&a,&b,&c);
    int r = gcd(a,b);
    r=gcd(c,r);
    printf("%d",r);
    return 0;
}

int gcd(int m, int n)
{
    while(m!=n)
    {
        if(m>n)
        m=m-n;
        else
        n=n-m;
    }
    return m;
}

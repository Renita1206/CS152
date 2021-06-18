#include<stdio.h>

int armstrong(int n);
int perfect(int n);

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(armstrong(n))
    printf("Number is an armstrong number \n");
    else{
    printf("Number is not an armstrong number \n");}

    if(perfect(n))
    printf("Number is a perfect number");
    else
    printf("Number is not a perfect number");
}

int armstrong(int n)
{
    int a=0,n1=n;
    while(n>0)
    {
        int d=n%10;
        a=a+d*d*d;
        n=n/10;
    }
    if(n1==a)
    return 1;
    else
    return 0;
}

int perfect(int n)
{
    int p=0,num=n;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        p=p+i;
    }
    if(p==num)
    return 1;
    else
    return 0;
}
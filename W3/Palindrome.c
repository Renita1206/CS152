#include<stdio.h>

int rev(int a);

int main()
{
    int n,r;
    int rev(int a);
    printf("Enter a number \n");
    scanf("%d",&n);
    r=rev(n);
    if(n==r)
        printf("Number is a palindrome");
    else    
        printf("Number is not a palindrome");
    return 0;
}

int rev(int n)
{
    int reverse=0;
    while(n>0)
    {
        reverse=(reverse*10)+(n%10);
        n=n/10;
    }
    return reverse;
}
#include<stdio.h>

int main()
{
    int n1,n2;
    char op;
    printf("Enter an operator(=,-,*,/): \n");
    scanf("%c",&op);
    printf("Enter operands \n");
    scanf("%d %d",&n1,&n2);
    switch(op)
    {
        case '+': printf("%d + %d = %d",n1,n2,n1+n2);
                  break;
        case '-': printf("%d - %d = %d",n1,n2,n1-n2);
                  break;
        case '*': printf("%d * %d = %d",n1,n2,n1*n2);
                  break;
        case '/': printf("%d / %d = %d",n1,n2,n1/n2);
                  break;
        default: printf("Invalid operator");
    }
    return 0;
}
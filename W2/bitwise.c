#include<stdio.h>
int main()
{
    unsigned int c;
    int i,j;
    printf("Enter number \n");
    scanf("%d",&c);
    printf("Enter position \n");
    scanf("%d",&i);
    if(c&(1<<i))
        printf("bit is set \n");
    else
        printf("Bit is not set \n");
    printf("Enter bit position to set \n");
    scanf("%d",&j);
    c=c|(1<<i);
    printf("Number after setting is: %d \n",c);
    printf("Enter bit position to clear \n");
    scanf("%d",&j);
    c=c & ~ (1<<i);
    printf("Number after clearing is: %d",c);
}
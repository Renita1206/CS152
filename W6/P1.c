//Pascal's triangle
#include<stdio.h>

int main()
{
    int a[100][100];
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    //initializing array
    int i,j;
    for (i=1; i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            if (j==1 || j==i)
                a[i][j] = 1;
            else
                a[i][j] =a[i-1][j]+a[i-1][j-1];
        }
    }
    printf("\n");
    //displaying array
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
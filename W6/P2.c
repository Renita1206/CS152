//Checking if a matrix is symmetric
#include <stdio.h>
int main()
{
    int p,q,i,j;
    int a[10][10];
    int b[10][10];
    int sym = 1;
    printf("Enter the value of m : ");
    scanf("%d",&p);
    printf("\nEnter the value of n: ");
    scanf("%d",&q);
    printf("\nEnter the elements in matrix of size %dx%d :\n", p, q);
    for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            scanf("%d",&a[i][j]); // accepting input
        }
    }
    if (p!=q)
    {
        printf("The given matrix is not a square matrix hence cannot be symmetric \n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
    else
    {
        for (i=0;i<p;i++) //transpose matrix
        {
            for (j=0;j<q;j++)
            {
                b[i][j]=a[j][i];
            }
        }
        for(i=0;i<p;i++) // check for symmetry
        {
            for(j=0;j<q;j++)
            {
                if (a[i][j] != b[i][j])
                    sym = 0;
            }
        }
        if (sym ==1) 
            printf("\nSymmetric Square Matrix: \n");
        else
            printf("\nAssymmetric Square Matrix:\n"); 
        for (i=0;i<p;i++) //display transpose
        {
            for (j=0;j<q;j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
}
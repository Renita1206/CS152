//Addition & subtraction of complex numbers
#include <stdio.h>

typedef struct complex  // complex number structure
{
    float x;
    float y;
}cx;

void complexadd(cx c1, cx c2);
void complexsubract(cx c1, cx c2) ;

void complexadd(cx c1, cx c2) //add 2 complex numbers
{
    cx c3;
    c3.x =c1.x+c2.x;
    c3.y =c1.y+c2.y;
    printf("Complex addition : ");
    if(c3.y>0)
        printf(" %.2f + %.2f i\n",c3.x,c3.y);
    else
        printf(" %.2f - %.2f i\n",c3.x,(c3.y)*-1);
}

void complexsubtract(cx c1, cx c2)    //subtract 2 complex numbers
{
    cx c3;
    c3.x =c1.x-c2.x;
    c3.y =c1.y-c2.y;
    printf("Complex subtraction :");
    if(c3.y>0)
        printf(" %.2f + %.2f i\n",c3.x,c3.y);
    else
        printf(" %.2f - %.2f i\n",c3.x,(c3.y)*-1);
}

int main()
{
    cx c1,c2;
    printf("Complex number 1 \n");
    printf("Input the real part of the complex number : ");
    scanf(" %f",&c1.x);
    printf("Input the imaginary part of the complex number : ");
    scanf(" %f",&c1.y);
    printf("Complex number 2 \n");
    printf("Input the real part of the complex number : ");
    scanf(" %f",&c2.x);
    printf("Input the imaginary part of the complex number : ");
    scanf(" %f",&c2.y);
    printf("Complex numbers\n");
    printf("%.2f + %.2f i\n",c1.x,c1.y);
    printf("%.2f + %.2f i\n",c2.x,c2.y);
    complexadd(c1, c2);
    complexsubtract(c1, c2);
    return 0;
}

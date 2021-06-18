// Checking if a date is lesser than,greater than or equal to another date
#include <stdio.h>

typedef struct date // date structure
{
    int dd;
    int mm;
    int yyyy;
}dt;

void datecompare(dt d1, dt d2);

void datecompare(dt d1, dt d2)
{
    int greater=2;
    if (d1.yyyy>d2.yyyy)
        greater=1;
    else if(d1.yyyy==d2.yyyy)
    {
        if (d1.mm > d2.mm)
            greater=1;
        else if (d1.mm == d2.mm)
        {
            if (d1.dd > d2.dd)
                greater=1;
        }
    }
    if(greater==1)
        printf("\nDate 1 is greater than Date 2");
    else
        printf("\nDate 2 is greater than Date 1");
}

int main()
{
    dt d1,d2;
    printf("Date 1 input : \n");
    printf("Input day in dd/mm/yyyy format : ");
    scanf("%d/%d/%d", &d1.dd,&d1.mm,&d1.yyyy);
    printf("Date 2 input : \n");
    printf("Input day in dd/mm/yyyy format : ");
    scanf("%d/%d/%d", &d2.dd,&d2.mm,&d2.yyyy);
    datecompare(d1,d2);
    return 0;
}
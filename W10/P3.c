//Find the next date (using enum)
#include <stdio.h>
#include <string.h>

typedef enum month
{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} mn;

char months[12][4] = { "jan", "feb", "mar", "apr", "may", "jun", "jul", "aug","sep", "oct","nov", "dec" };

void findNextDate(int day, int month) 
{
    if ((day == 31) && (month == 11))
        printf(" 1 jan \n");
    else if ((day == 31) && ((month == 0) || (month == 2) || (month == 4) || (month ==6) ||(month == 7) || (month == 9)))
        printf(" 1 %s \n", months[month + 1]);
    else if ((day == 30) && ((month == 3) || (month == 5) || (month == 8) || (month ==10)))
        printf(" 1 %s \n", months[month + 1]);
    else if ((day == 28) && (month == 1))
        printf(" 1 %s \n", months[month + 1]);
    else
        printf(" %d %s \n", day+1, months[month]);
}

int main()
{
    int day; int i;
    char month[4];
    printf("Input a date (number <space> 3 letter lower case month e.g. 31 jan) : ");
    scanf(" %d %s", &day, month);
    printf("The next day is : ");
    for (i = jan; i <= dec; i++) if (strcmp(month, months[i]) == 0)
        findNextDate(day, i);
    return 0;
}
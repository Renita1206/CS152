#include<stdio.h>

int main()
{
    int marks;
    char grade='F';
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks>85)
        grade='A';
    else if(marks>60)
        grade='B';
    else if(marks>40)
        grade='C';
    else if(marks>30)
        grade='D';
    else
        printf("You failed");
    if(grade!='F')
        printf("Your grade is %c",grade);
    return 0;
}



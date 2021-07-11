//Bubble sorting records from a .csv file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student // structure to hold the .csv file's rows
{
    int roll_no;
    char name[128];
} STUDENT_T;

void swap(STUDENT_T** p, STUDENT_T** q) // array element swap function
{
    STUDENT_T* temp = *p;
    *p = *q;
    *q = temp;
}

void display(STUDENT_T* p[], int n) // display array of pointers
{
 for (int i = 0; i < n; i++) 
    printf(" %d %s\n", p[i]->roll_no, p[i]->name);
}

void sort_on_roll_no(STUDENT_T* p[], int n) // bubble sort based on rollno
{
    int i, pos, j;
    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++) 
            if (p[pos]->roll_no > p[j]->roll_no) 
                pos = j;
        if (pos != i) 
            swap(&p[pos], &p[i]);
    }
}

void sort_on_name(STUDENT_T* p[], int n) // bubble sort based on name
{
    int i, pos, j;
    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++) 
            if (strcmp(p[pos]->name, p[j]->name) > 0) 
                pos = j;
        if (pos != i) 
            swap(&p[pos], &p[i]);
    }
}

int main()
{
    FILE* f1 = fopen("students.csv", "r");
    if (f1 == NULL) 
        perror("The file could not be opened ..."); // file error 
    else
    {
        STUDENT_T st[1024];
        STUDENT_T* p[1024];
        char line[128];
        int i;
        int n;
        int ch;
        fgets(line, 128, f1); // clearing first row
        for (i = 0; fgets(line, 128, f1) != NULL; i++) 
        {
            char* r = strtok(line, ",");
            char* name = strtok(NULL, ",");
            st[i].roll_no = atoi(r);
            strcpy(st[i].name, name);
            p[i] = &st[i];
        }
        n = i; // number of elements in the arrays
        A :
        printf("Menu \n1. Sort by roll # \n2. Sort by name\n3. Exit\nInput your choice ...");
        scanf("%d", &ch);
        printf("\n");
        switch (ch)
        {
            case 1 :
                sort_on_roll_no(p, n); 
                display(p, n); 
                break;
            case 2 : 
                sort_on_name(p, n); 
                display(p, n); 
                break;
            case 3 : 
                exit(0);
                break;
            default : 
                printf("Invalid response. Try again ... \n\n");
        }
        goto A;
    }
    return 0;
}
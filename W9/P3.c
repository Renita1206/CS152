//Sorting an integer array using insertion sort
#include <math.h>
#include <stdio.h>
void insertionSort(int a[], int n) // insertion sorting function
{
    int i;
    int j;
    int k;
    for (i = 1; i < n; i++) 
    {
        k = a[i];
        for (j = i - 1; (j >= 0) && (a[j] > k); j--) 
            a[j + 1] = a[j];
        a[j + 1] = k;
    }
}

void inputArray(int a[], int n) // array input function 
{
    printf("Input the integer elements with spacing : ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("\n");
}

void displayArray(int a[], int n) // array printing function 
{
    int i;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int n;
    printf("Input the size of the array : ");
    scanf(" %d", &n);
    printf("\n");
    int a[100];
    inputArray(a, n);
    insertionSort(a, n);
    printf("Sorted array : ");
    displayArray(a, n);
    return 0;
}
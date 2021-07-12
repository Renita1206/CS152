//Binary search using callback
#include <stdio.h>

int is_less_than_22(int key) // callback condition for less than 22
{
    int result = 0;
    if (key < 22) 
        result = 1;
    return result;
}

int is_even(int key) // callback condition for even
{
    int result = 0;
    if ((key % 2) == 0) 
        result = 1;
    return result;
}

int my_search(int* a, int l, int h, int key, int (*p)(int))// binary search 
{
    int pos = -1;
    if (p(key) == 0) 
        return pos;
    while (l <= h && pos == -1)
    {
        int mid = (l + h) / 2;
        if (a[mid] == key)
            pos = mid;
        else if (key < a[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return pos;
}

int main()
{
    int a[] = {10,14,16,24,26,34,38,39,41,45,47,54,58,60,64,68,71,75,79,81,88,90,93,95,100}; //array
    int n = sizeof(a) / sizeof(int); // size of array
    int key; int result;
    printf("Enter the search element : ");
    scanf("%d", &key);
    result = my_search(a, 0, n - 1, key, is_even);
    if (result == -1)
        printf("Not found\n");
    else
        printf("Search element is even and available at position %d\n", result);
    result = my_search(a, 0, n - 1, key, is_less_than_22);
    if (result == -1)
        printf("Not found\n");
    else
        printf("Search element is less than 22 & available at position %d\n", result);
    return 0;
}

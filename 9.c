#include <stdio.h>

int main()
{
    //program to search a number in an array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("Enter the number to be searched: ");
    scanf("%d", &x);
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d is present at index %d", x, i);
            break;
        }
    }
    if (i == n)
        printf("%d is not present", x);
    return 0;
}
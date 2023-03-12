//Print all negative elements in array

#include<stdio.h>
int main()
{
    int arr_size;
    printf("Enter size of array: ");
    scanf("%d", &arr_size);

    int arr[arr_size];
    for (int i = 0; i<arr_size; i++)
    {

        scanf("%d", &arr[i]);
    }

    printf("All negative elements in array are: ");
    for (int i = 0; i<arr_size; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
}

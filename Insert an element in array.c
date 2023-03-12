 //To insert an element in array

#include <stdio.h>

int main()
{
  //arr size input
  int size, arr[100];
  printf("Enter size of array: ");
  scanf("%d", &size);

  //arr ele input
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  //ele to insert input
  int ele;
  printf("Enter element to insert in array: ");
  scanf("%d", &ele);

  //ele index input
  int ele_ind;
  printf("Enter index of ele: ");
  scanf("%d", &ele_ind);

  //index validity check
  if ((ele_ind < 0) || (ele_ind > size))
  {
    printf("Invalid index");
    return 0;
  }

  //shifting ele to add new ele
  for (int i = size-1; i >= ele_ind; i--)
    {
      arr[i+1] = arr[i];
    }

  //insert ele
  arr[ele_ind] = ele;
  size ++;

  //print new array
  printf("Array after insertion: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
    printf("\n");

    return 0;
}

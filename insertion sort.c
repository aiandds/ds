#include <math.h>
#include <stdio.h>
 
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
/* Driver program to test insertion sort */
int main()
{
    
    int siz;

    printf("Enter the size of the array\n");
    scanf("%d",&siz);

    int arr[siz];

    printf("Enter the element of the array \n");
    for(int i = 0; i < siz;i++)
    {
        scanf("%d",&arr[i]);
    }
 
    insertionSort(arr, siz);
    printArray(arr, siz);
 
    return 0;
}

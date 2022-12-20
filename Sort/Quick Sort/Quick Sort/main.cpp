#include <iostream>
using namespace std;

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void PrintArray (int array[], int length)
{
    for (int i = 0; i < length; i++)
        cout<<array[i]<<"\t";
}

/*
 takes last element as pivot,
 places the pivot element at its correct position in sorted array,
 and places all smaller (smaller than pivot) to left of pivot
 and all greater elements to right of pivot
 */
int Partition(int array[], int low, int high)
{
    int pivot = array[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates
                        // the right position of pivot found so far
  
    for (int j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot) // If current element is smaller than the pivot
        {
            i++; // increment index of smaller element
            swap (&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

/*
 array[] :  Array to be sorted,
 low : Starting index,
 high : Ending index
*/
void QuickSort (int array[], int low, int high)
{
    if (low < high)
    {
        int pivot = Partition(array, low, high);
        
        QuickSort(array, low, pivot - 1);
        QuickSort(array, pivot + 1, high);
    }
}
int main(int argc, const char * argv[]) {
    int array[] = {10, 6, 7, 4, 5, 2};
    int length = sizeof(array)/sizeof(array[0]);
    
    QuickSort(array, 0, length - 1);
    cout<<"The result of array is: ";
    PrintArray(array, length);
    cout<<"\n";
    return 0;
}

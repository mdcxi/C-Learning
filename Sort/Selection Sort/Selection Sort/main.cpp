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
    {
        cout<<array[i]<<"\t";
    }
}

void SelectionSort (int array[], int length)
{
    int min_index;
    for (int i = 0; i < length - 1; i++)
    {
        min_index = i;
        for (int j = i+1; j < length; j++)
        {
            if (array[j] < array[min_index])
                min_index = j;
        }
        if (min_index != i)
            swap(&array[min_index], &array[i]);
    }
}

int main(int argc, const char * argv[])
{
    int array[] =
    {
        9, 0, 3, 5, 7, 8
    };
    
    int length = sizeof(array)/sizeof(array[1]);
    
    SelectionSort(array, length);
    cout<<"The result of selection sort is: ";
    PrintArray(array, length);
    cout<<endl;
}

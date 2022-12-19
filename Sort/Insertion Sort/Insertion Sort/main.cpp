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

void InsertionSort (int array[], int length)
{
    int key, j;
    for (int i = 1; i < length; i++)
    {
        key = array[i]; //key = array[1];
        j = i - 1;      //j = 0
        
        //condition: j >= 0 (yes) and array[0] > array[1] (present)
        while (j >= 0 && array[j] > key)
        {
            //if  condition in while is "true"
            array[j+1] = array[j];   //array[1] = array [0] (present)
            j--;                    //j-- -> j = -1; (present) and we exit this while loop and continue the for loop next below
        }
        array[j+1] = key;           //array[1] = key (present)
    }
}

int main(int argc, const char * argv[])
{
    int array[5] = {7, 6, 5, 10, 1};
    int length = sizeof(array)/sizeof(array[0]);
    
    InsertionSort(array, length);
    cout<<"The result of insertion sort is: ";
    PrintArray(array, length);
    cout<<endl;
}

#include <iostream>
using namespace std;

//time complexity is : nlog(2n)
//this algorithm took me approximately 2 hours to understand how it works lmao =)))
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

void Heapify (int array[], int length, int index)
{
    int largest = index; //Initialize the largest root
    
    int left = 2 * index + 1; //left node index is 2*i + 1
    int right = 2 * index + 2;//right node index is 2*i + 2
    
    if (left < length && array[left] > array[largest]) largest = left; //if left node child is larger than root
    if (right < length && array[right] > array[largest]) largest = right; //if right node child is larger than root
    
    if (largest != index) //if the largest isn't root
    {
        swap(&array[index], &array[largest]); //swap and continue heapifying if root isn't largest
        Heapify(array, length, largest); //recursively heapify the affected subtree
    }
}

void HeapSort (int array[], int length)
{
    for (int i = length/2-1; i >=0; i--) Heapify(array, length, i); //build (max) heap
    
    //heap sort
    for (int i = length - 1; i >= 0; i--)
    {
        swap(&array[0], &array[i]);
        Heapify(array, i, 0);
    }
}

int main(int argc, const char * argv[]) {
    int array[] = {10, 4, 5, 6, 7, 1, 2 }; //sizeof (array) = 4 * 7 = 28 bytes
    int length  = sizeof(array)/sizeof(array[0]);
    HeapSort(array, length);
    PrintArray(array, length);
    cout<<"\n";
}

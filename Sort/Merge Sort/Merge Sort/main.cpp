#include <iostream>
using namespace std;

//time complexity s : nlog(2n)

void Merge(int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1; //auto is same as with var key word in c#
    auto const subArrayTwo = right - mid;
 
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (int i = 0; i < subArrayOne; i++) leftArray[i] = array[left + i];
    for (int j = 0; j < subArrayTwo; j++) rightArray[j] = array[mid + 1 + j];
 
    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
        indexOfSubArrayTwo = 0; // Initial index of second sub-array
    auto indexOfMergedArray = left; // Initial index of merged array
 
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo)
    {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo])
        {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else
        {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    
    // Copy the remaining elements of leftArray[]
    while (indexOfSubArrayOne < subArrayOne)
    {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    
    // Copy the remaining elements of rightArray[]
    while (indexOfSubArrayTwo < subArrayTwo)
    {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    
    delete[] leftArray; //giai phong vung nho
    delete[] rightArray; //giai phong vung nho
}

void PrintArray (int array[], int length)
{
    for (int i = 0 ; i < length; i++)
        cout<<array[i]<<"\t";
}

void MergeSort (int array[], int const begin, int const end)
{
    if (begin >= end) return;; //return recursively
    auto mid = begin + (end - begin)/2;
    MergeSort(array, begin, mid);
    MergeSort(array, mid + 1, end);
    Merge(array, begin, mid, end);
}

int main(int argc, const char * argv[]) {
    int array[] = {1,2,3,10,4,6,5};
    int length = sizeof(array)/sizeof(array[0]);
    
    MergeSort(array, 0, length - 1);
    cout<<"The result of merge sort is: ";
    PrintArray(array, length);
    cout<<"\n";
}

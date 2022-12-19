#include <iostream>

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort (int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j+1])
                swap(&a[j], &a[j+1]);
    }
}

void PrintArray (int a[], int length)
{
    for (int i = 0; i< length; i++)
        std::cout<<a[i]<<"\t";
}

int main(int argc, const char * argv[]) {
    
    int a[] =
    {
        10, 1, 2, 5, 3
    };
    
    int n = sizeof(a)/sizeof(a[0]); // 20/4 = 5 => n = 5
    BubbleSort(a, n);

    std::cout<<"The result is: ";
    PrintArray(a, n);
    std::cout<<"\n";
    return 0;
}

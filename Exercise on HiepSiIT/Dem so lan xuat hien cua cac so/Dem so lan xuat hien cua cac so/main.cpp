#include <iostream>
using namespace std;

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void InputEachElement (int array[], int length)
{
    for (int i = 0 ; i < length ; i++)
    {
        cout<<"Input the element a["<<i<<"]: ";
        cin>>array[i];
    }
}

void PrintArray (int array[], int length)
{
    for (int i = 0 ; i < length ; i++)
    {
        cout<<array[i]<<"\t";
    }
}

int main(int argc, const char * argv[]) {
    int length, array[length], count[length];
    
    cout<<"Input the array quantity: ";
    cin>>length;
    
    InputEachElement(array, length);
    
    int max = array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    //Sau khi tim duoc max roi
    for (int i = 0; i < length; i++)
    {
        count[i] = 0;
    }
    
    for (int i = 0; i < length; i++)
    {
        count[array[i]]++;
    }
    
    for (int i = 0; i <= max; i++)
    {
        if (count[i] > 0)
        {
            cout<<i<< " - " << count[i] << "; ";
        }
    }
    
    return 0;
}

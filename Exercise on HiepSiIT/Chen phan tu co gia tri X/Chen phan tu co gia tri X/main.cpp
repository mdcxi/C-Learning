#include <iostream>
using namespace std;

void InputEachElement (int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout<<"Input the value of a["<<i<<"]: ";
        cin>>array[i];
    }
}

void PrintArray (int array[], int length)
{
    for (int i = 0; i < length; i++)
        cout<<array[i]<<"\t";
}

void InsertNewElement (int array[], int length, int index)
{
    for (int i = length; i >= index + 1; i--)
    {
        array[i] = array[i-1];
    }
}

int main(int argc, const char * argv[]) {
    
    int length, array[length], value, index;
    
    cout<<"Input the array quantity: ";
    cin>>length;
    
    InputEachElement(array, length);
    
    cout<<"Input the new value you want to insert and its index: ";
    cin>>value>>index;
   
    InsertNewElement(array, length,index);
    array[index] = value;
    length++;
    
    PrintArray(array, length);
    
    return 0;
}

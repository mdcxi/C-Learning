#include <iostream>
using namespace std;

int LinearSearch (int array[], int length, int value)
{
    for (int i = 0; i < length; i++)
        if (array[i] == value)
            return i;
    return -1;
}

void InputEachElemet (int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout<<"Input the element a["<<i<<"]: ";
        cin>>array[i];
    }
}

void PrintArray (int array[], int length)
{
    for (int i = 0; i < length; i++)
        cout<<array[i]<<"\t";
}

int main(int argc, const char * argv[]) {
    int length, array[length], value;
    
    cout<<"Input the length of array: ";
    cin>>length;
    
    InputEachElemet(array, length);
    
    cout<<"Input the value you want to search: ";
    cin>>value;
    
    int result = LinearSearch(array, length, value);
    (result == -1) ? (cout<<"The value isn't found in the array"): (cout<<"Found it in the array. The position is: "<<result);
    cout<<"\n";
    return 0;
}

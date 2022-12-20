#include <iostream>
using namespace std;

void InputEachElement (int array[], int length)
{
    for (int i =0; i < length; i++)
    {
        cout<<"Input the element a["<<i<<"]: ";
        cin>>array[i];
    }
}

void SquareEachElement (int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        array[i] *= array[i];
        cout<<array[i]<<"\t";
    }
}

int main(int argc, const char * argv[]) {
    
    int length, array[length];
    
    cout<<"Input the array quantity: ";
    cin>>length;
    
    InputEachElement(array, length);
    
    cout<<"The result after squaring each element is: ";
    SquareEachElement(array, length);
    return 0;
}

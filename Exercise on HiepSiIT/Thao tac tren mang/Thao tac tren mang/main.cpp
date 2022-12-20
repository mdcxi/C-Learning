#include <iostream>
using namespace std;

void InputArrayElements (int array[], int length)
{
    cout<<"Length is: "<<length;
    for (int i = 0; i < length; i++)
    {
        cout<<"Input the element a["<<i<<"]: ";
        cin>>array[i];
    }
}

int CalculateSum (int array[], int length)
{
    int tong = 0;
    for (int i = 0; i  < length; i++)
    {
        tong += array[i];
    }
    return tong;
}

int main(int argc, const char * argv[])
{
    int length, array[length], sum;

    cout<<"Input the element quantity: ";
    cin >>length;
    
    InputArrayElements(array, length);
    sum = CalculateSum(array, length);
    cout<<"Sum of above elements is: "<<sum;
    return 0;
}

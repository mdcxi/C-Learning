#include <iostream>
#include <math.h>

using namespace std;

void InputEachElement (int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout<<"Input the element a["<<i<<"]: ";
        cin>>array[i];
    }
}

/*
E.G.: x = 6, sqrt(6)=2.4
 i = 2 -> true -> 6%2=0
 stop loop
 */
/*
E.G.: x = 27, sqrt(27) = 5
 i = 2 -> true -> 27%2!=0
 i = 3 -> true -> 27%3==0 (stop looping)
 */
bool CheckPrimeNumbers (int value)
{
    if (value < 2) return false;
    for (int i = 2; i <= sqrt(value); i++)
    {
        if (value % i == 0)
            return false;
    }
    return true;
}

void PrintPrimeNumbers(int array[], int length)
{
    cout<<"Prime Number(s) in this array is/are: ";
    for (int i = 0; i < length; i++)
    {
        if (CheckPrimeNumbers(array[i]))
            cout<<array[i]<<"\t";
    }
}
int main(int argc, const char * argv[])
{
    int length, array[length];
    
    cout<<"Input the array quantity: ";
    cin>>length;
    
    InputEachElement(array, length);
    PrintPrimeNumbers(array, length);
    return 0;
}

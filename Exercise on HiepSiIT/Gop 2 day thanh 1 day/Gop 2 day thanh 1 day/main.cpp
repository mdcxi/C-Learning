#include <iostream>
using namespace std;

void InputEachElement (int array[], int length)
{
    for (int i =0; i< length; i++)
    {
        cout<<"Input a["<<i<<"]: ";
        cin>>array[i];
    }
}


int main(int argc, const char * argv[]) {
    int  firstArrayLength, secondArrayLength, modifiedArrayLength;
    
    int firstArray[firstArrayLength], secondArray[secondArrayLength], modifiedArray[50];
    
    int i = 0, j = 0;
    
    cout<<"Input the first array quantity: ";
    cin>>firstArrayLength;
    InputEachElement(firstArray, firstArrayLength);
    
    cout<<"Input the seceond array quantity: ";
    cin>>secondArrayLength;
    InputEachElement(secondArray, secondArrayLength);
    
    while (i < firstArrayLength && j < secondArrayLength)
    {
        if (firstArray[i] < secondArray[j])
        {
            modifiedArray[modifiedArrayLength] = firstArray[i];
            modifiedArrayLength ++;
            i++;
        }
        else
        {
            modifiedArray[modifiedArrayLength] = secondArray[j];
            modifiedArrayLength++;
            j++;
        }
    }
    while (i < firstArrayLength)
    {
        modifiedArray[modifiedArrayLength] = firstArray[i];
        modifiedArrayLength++;
        i++;
    }
    
    while (j < secondArrayLength)
    {
        modifiedArray[modifiedArrayLength] = secondArray[j];
        modifiedArrayLength++;
        j++;
    }
    
    for (int i = 0; i < modifiedArrayLength; i++)
        cout<<modifiedArray[i]<<"\t";
    
    return 0;
}

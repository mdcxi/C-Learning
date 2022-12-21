#include <iostream>
using namespace std;

/*
 Một dãy đơn điệu khi nó là dãy số tăng (a[i] > a[i-1]),
 hoặc dãy số giảm (a[i] < a[i-1]).
 */

void InputEachElement (int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout<<"Input the element a["<<i<<"]: ";
        cin>>array[i];
    }
}

int main(int argc, const char * argv[]) {
    int length, array[length];
    
    cout<<"Input array quantity: ";
    cin>>length;
    
    InputEachElement(array, length);
    
    bool checkAscending = true, checkDescending = true;
    
    for (int i = 1 ; i < length; i++)
    {
        if (array[i] >= array[i-1]) checkAscending = false; //descending is true
        if (array[i] <= array[i-1]) checkDescending = false; //ascending is true
    }
    
    (checkAscending || checkDescending)? cout<<"La mang don dieu":cout<<"Khong phai mang don dieu";
    cout<<"\n";
    return 0;
}

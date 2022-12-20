#include <iostream>
using namespace std;

void InputEachElement (int array[], int length)
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
    int length, array[length], index;
    
    cout<<"Input the array quantity: ";
    cin>>length;
    
    InputEachElement(array, length);
    
    cout<<"Input an element index that you wanna delete: ";
    cin>>index;
    
  
    for (int i = index; i < length; i++)
    {
     /*
      VD: length = 3, index muon xoa = 1
      i = 1, tai a[1] = 2, a[3] = 3 => a[1] = 3
      i = 2, tai a[2] = a[3] k tinh duoc do k co phan tu t3, den a[2] la toi da
      */
        array[i] = array[i+1];
    }
    
    length--;

    PrintArray(array, length);
    return 0;
}

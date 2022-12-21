#include <iostream>
using namespace std;

void PrintArray (int array[], int length)
{
    for (int i = 0; i < length; i++)
        cout<<array[i]<<"\t";
}

void InputEachElement (int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout<<"Input the element a["<<i<<"]: ";
        cin>>array[i];
    }
}

int BinarySearch (int array[], int left, int right, int value)
{
    if (right >= 1)
    {
        int midIndex = (left + (right-1))/2; //lay moc giua hoac gan chinh giua
        if (array[midIndex] == value) return midIndex; //value = a[mid] -> return index
        
        //Neu value < moc giua, bo doan dang sau moc giua -> lay moc tu 1 -> mid - 1
        if (value < array[midIndex]) return BinarySearch(array, 1, midIndex - 1, value);
        return BinarySearch(array, midIndex + 1, right, value); //nguoc lai, lay moc tu mid + 1 tro ve ben phai
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    int length, array[length], value;
    
    cout<<"Input the array quantity: ";
    cin>>length;
    
    InputEachElement(array,length);
    cout<<"Input the value you want search in array: ";
    cin>>value;
    
    int result = BinarySearch(array, 0, length - 1, value);
    (result == -1)? cout<<"Can't find value in array!" : cout<<"Find it! The index of value in array is: "<<result;
    cout<<"\n";
    return 0;
}

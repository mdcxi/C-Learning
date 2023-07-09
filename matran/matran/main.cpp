#include <iostream>
#include <iomanip>

using namespace ::std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int dong, cot;
    int a[10][10];
    
    cout<<"Nhap so dong: ";
    cin>>dong;
    
    cout<<"Nhap so cot: ";
    cin>>cot;
    
    for (int i = 0; i <dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    
    for (int i = 0; i <dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout<<setw(5)<<a[i][j];
        }
        cout<<"\n";
    }
    
    int max = a[0][0];
    int dongmax, cotmax;
    for (int i = 0; i <dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                dongmax = i;
                cotmax = j;
            }
        }
    }
    
    cout<<"Phan tu lon nhat la: "<<max<<" tai dong: "<<dongmax + 1 <<", tai cot: "<<cotmax + 1<<"\n";
}

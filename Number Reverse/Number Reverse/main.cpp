#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cout<<"Input a value of n: ";
    cin>>n;
    
    cout<<"The value of n after reversing: ";
    for (; n!= 0; n/=10)
    {
        cout << n%10;
    }
    cout<<"\n";
    return 0;
}

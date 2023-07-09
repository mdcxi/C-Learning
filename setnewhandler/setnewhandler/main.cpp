#include <iostream>
using namespace std;

int i;

void kiemtra (void)
{
    cout<<"error";
    exit(0);
}

int main(int argc, const char * argv[]) {
    int sl = 1000;
    int *a[100];
    
    for (i = 0; i < 100; i++)
    {
        a[i] = new int[sl];
        cout<<"ok";
    }
}

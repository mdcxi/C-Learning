#include <iostream>
#include <iomanip>
using namespace::std;

struct SinhVien
{
    string ht;
    int sbd;
    float td;
};

int main(int argc, const char * argv[])
{
    int sl;
    
    //Nhap so luong sinh vien
    cout<< "Nhap so luong sinh vien: ";
    cin>>sl;
    
    //Cap phat bo nho
    SinhVien *sv = new SinhVien[sl];

    if (sv == NULL)
    {
        cout<<"Khong du bo nho de cap nhat";
        exit(0);
    }
    
    //Nhap thong tin moi sinh vien
    for (int i = 0; i < sl; i++)
    {
        cout<<"Ho ten: ";
        cin>>sv[i].ht;
        
        cout<<"So bao danh: ";
        cin>>sv[i].sbd;
        
        cout<<"Tong diem: ";
        cin>>sv[i].td;
    }
    
    SinhVien temp;
    

    for(int i = 0; i < sl ; i++)
    {
        for (int j = 1; j <sl - 1; j++)
        {
            if (sv[i].td < sv[j].td)
            {
                temp = sv[i];
                sv[i] = sv[j];
                sv[j]= temp;
            }
        }
    }
    cout<< setiosflags(ios::showpoint) << setprecision(2);
    
    //Xuat sinh vien theo thu tu giam dan cua tong diem
    cout<<"Danh sach thi sinh theo tu tu giam dan cua tong diem:"<<"\n";
    
    for(int i = 0; i < sl; i++)
        cout<< setw(10) << sv[i].ht
            << setw(10) <<sv[i].sbd
                << setw(10) << sv[i].td<<"\n";

    //Giai phong bo nho
    delete[] sv;
}

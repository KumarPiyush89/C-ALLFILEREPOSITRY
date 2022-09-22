#include<iostream>
using namespace std;
int main()
{
    char d[5],m[5],y[5];
    cout<<"Enter date (dd/mm/yyyy):";
    cin.getline(d,3);
    cin.ignore(1);
    cin.getline(m,3);
    cin.ignore(1);
    cin.getline(y,5);
    cout<<d<<"-"<<m<<"-"<<y;
    return 0;
}
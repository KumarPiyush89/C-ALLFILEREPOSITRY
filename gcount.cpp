#include<iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"enter any word:";
    cin.getline(str,20);
    cout<<"Last time read characters="<<cin.gcount()<<"\nstr="<<str;
    
    return 0;
}
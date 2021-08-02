#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    int max=20;
    char str[max];
    cout<<"Enter string \n"<<endl;
    cin>>str;
    cout<<"U Entered \n"<<str<<endl;
    //FOR AVOID BUFFER OVERFLOW
cout<<"\n\n    \t\nFOR AVOID BUFFER OVERFLOW"<<endl;
    cout<<"Enter string \n"<<endl;
    cin>>str;
    cout<<"U Entered \n"<<setw(max)<<str<<endl;

}
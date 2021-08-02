#include <iostream>
#include<iomanip>
using namespace std;
struct part
{
    int modelnaumber;
    int partnumber;
    float cost;
};
int main()
{
const int size=3;
part part1[size];
for(int i=0;i<=size;i++)
{
cout<<"Enter the "<<i+1<<"part number"<<endl;
cin>>part1[i].partnumber;
cout<<"Enter the "<<i+1<<"model number"<<endl;
cin>>part1[i].modelnaumber;
cout<<"Enter the "<<i+1<<"mode cost number"<<endl;
cin>>part1[i].cost;
}
for(int n=0;n<=size;n++)
{
cout<<"model "<<n+1<<" number :\t"<<part1[n].modelnaumber<<endl;
cout<<"model "<<n+1<<"  partnumber :\t"<<part1[n].partnumber<<endl;
cout<<"model "<<n+1<<" cost :\t"<<part1[n].cost<<endl;
}
}
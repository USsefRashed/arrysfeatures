#include<iostream>
using namespace std;
class Distance
{
private:
float inches;
int feet;
public:
void getDistance()
{
    cout<<"Enter feet :\n";cin>>feet;   //get feet
    cout<<"Enter inches : \n";cin>>inches;  //get inches
}
void showDistance()
{
    cout<<"feet ="<<feet<<"\t-\tinches ="<<inches<<endl;
}
};
int main()
{
    int MAX;
    cout<<"Enter number of distances you wont to calculate :\n";cin>>MAX;
    Distance dist[MAX];
    int n=0;
    char ans;
    do
    {
    cout<<"Enter distance number "<<n+1;dist[n++].getDistance();
    cout<<"Enter another?  (y/n)"<<endl;cin>>ans;
        if(MAX<=n)
    {
    cout<<"the Array is completed"<<endl;break;
    }   
    } while (ans!='n');
    for(int i=0;i<n;i++)
    {cout<<"Distance number"<<i+1<<" is =";dist[i].showDistance();}
    
}
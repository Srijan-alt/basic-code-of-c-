#include<iostream>
using namespace std;
int main()
{
    int ans;
    int i;
    int a=1;
    cout<<"enter the the number you want the sequence"<<endl;
    cin>>ans;
    for(i=0;i<ans;i++)
    {
        a=a*2;
        cout<<a<<endl;
        a++;
    }
    return 0;
}

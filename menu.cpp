#include<iostream>
using namespace std;
void menu()
{
    cout<<"1. breakfast"<<endl;
    cout<<"2. lunch"<<endl;
    cout<<"3. dinner"<<endl;
}
int main()
{
    string ans;
    int input;
    cout<<"do you want to menu"<<endl;
    cin>>ans;
    if(ans=="yes")
    {
        menu();
        cin>>input;
        cout<<input;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int respond;
    string ans;
    cout<<"WELCOME\n\n";
    do
    {
    cout<<"menu\n";
    cout<<"press\n 1-For bread\n 2-For omlete\n 3-For butter\n 4-For jam\n";
    cin>>respond;
    switch(respond){
    case 1:
    {
        cout<<"you have opted for bread"<<endl;
        break;
    }
    case 2:
    {
        cout<<"you have opted for omlete"<<endl;
        break;
    }
    case 3:
    {
        cout<<"you have opted for butter"<<endl;
        break;
    }
    case 4:
    {
        cout<<"you have opted for jam"<<endl;
        break;
    }
    default:
        cout<<"not in the menu"<<endl;
        break;
    }
    cout<<"do you want anything else"<<endl;
    cin>>ans;
    }while(ans=="yes");
    cout<<"thank you"<<endl;
    return 0;
    }

#include<iostream>
using namespace std;
int main()
{
    const string password ="hello";
    string ans;
    string input;
    do
    {
        cout<<"enter the password\n";
        cin>>input;
        if(input == password)
        {
            cout<<"correct\n";
            break;
        }
        else
        {
            cout<<"wrong\n";
        }
    }while(true);
    return 0;
}

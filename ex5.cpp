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
            return 0;
        }
        else
        {
            cout<<"wrong\n";
        }
        cout<<"do you  want to continue\n";
        cin>>ans;
    }while(ans == "yes");
    return 0;
}

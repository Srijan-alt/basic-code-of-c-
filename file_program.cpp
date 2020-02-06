#include<iostream>
using namespace std;
int main()
{
    string main_ans="yes";
    int record=1;
    int record_1;
    string ans;
    int ans2;
    while(main_ans=="yes")
    {
    cout<<"do you wanna enter the world of files"<<endl;
    cin>>ans;
    if(ans=="yes")
    {
        cout<<"this is menu of the world\n"<<endl;
        cout<<"press 1 for creating the file"<<endl;
        cout<<"press 2 for changing the name of existing file"<<endl;
        cout<<"press 3 for searching the records"<<endl;
        cout<<"now enter your ans"<<endl;
        cin>>ans2;
        cout<<"'"<<ans2<<"'"<<endl;
    }
    else
    {
        cout<<"are you scared??"<<endl;
    }
    if(ans2==1)
    {
        string file_1;
        cout<<"enter the name of the file"<<endl;
        cin>>file_1;
        cout<<"'"<<file_1<<"'"<<endl;
    }
    if(ans2==2)
    {
        string file_2;
        cout<<"enter the name of the  file you want to change"<<endl;
        cin>>file_2;
        cout<<"'"<<file_2<<"'"<<endl;
        cout<<"enter the name you want to change it with"<<endl;
        cin>>file_2;
        cout<<"'"<<file_2<<"'"<<endl;
        cout<<"changed"<<endl;
    }
    if(ans2==3)
    {
        cout<<"enter the serial number you want to search about"<<endl;
        cin>>record_1;
        if(record==record_1)
        {
            cout<<"found"<<endl;
        }
    }

    cout<<"do you wish to continue\n";
    cin>>main_ans;
    }
    if(main_ans!="yes")
    {
        cout<<"you have wished not to continue further\n";
        return 0;
    }
}

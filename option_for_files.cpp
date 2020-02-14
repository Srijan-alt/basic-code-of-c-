#include<iostream>
using namespace std;
void menu()
{
    cout<<"1. searching"<<endl;
    cout<<"2. viewing"<<endl;
    cout<<"3. quiting"<<endl;
}
int user_input()
{
    int ans;
    cout<<"enter your choice"<<endl;
    cin>>ans;
    return ans;
}
void your_ans(int s)
{
    switch(s){
    case 1:
        {
            cout<<"searching has started"<<endl;
            break;
        }
    case 2:
        {
            cout<<"viewing has started"<<endl;
            break;
        }
    case 3:
        {
            cout<<"quiting has started"<<endl;
            break;
        }

    }

}
int main()
{
    menu();
    int s=user_input();
    your_ans(s);
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
   string pass;
   string real_pass="sh";
   cout<<"enter the password now!!!"<<endl;
   cin>>pass
   ;
   if(pass==real_pass)
   {
       cout<<"Your are right"<<endl;
   }
   else
   {
       cout<<"WRONG"<<endl;
   }
   return 0;

}

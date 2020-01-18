#include<iostream>
using namespace std;
int main()
{
    string names[2][3]={"rajan","pintu","sonu","monu","sweety","tweety"};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
        cout<<names[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
//i is for the rows and j is for the coloum


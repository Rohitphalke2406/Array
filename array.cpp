#include<iostream>
using namespace std;

int main()
{
    int data[5];
    cout<<" Enter your numbers :";
    for(int i=0;i<5;i++)
    {
        cin>>data[i];
    }
    cout<<" Your Entered Numbers :";
    for(int i=0;i<5;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;

    return 0;
}

   
    
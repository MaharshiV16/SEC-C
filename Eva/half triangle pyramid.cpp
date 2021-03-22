#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows\n";
    cin>>row;

    for(int i=row;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"`";
        }
        cout<<"\n";
    }

    for(int k=1;k<=row;k++)
    {
        for(int l=1;l<=k;l++)
        {
            cout<<"`";
        }
        cout<<"\n";
    }
}

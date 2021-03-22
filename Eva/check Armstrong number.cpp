#include<iostream>
using namespace std;

int main()
{
    int n,i,j,n1,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    n1 = n;
    for(i=1;n!=0;i++)
    {
        j = n%10;
        sum = sum+ j*j*j;
        n= n/10;
    }

   if(sum==n1)
    cout<<n1<<" is an armstrong number\n";
   else
    cout<<n1<<" is not an armstrong number\n";

}

#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Enter the length of fibinacci series : ";
    cin>>length;
    for(int n=1;n<=length;n++)
    {
        int n1 = 0;
        int n2 = 1;
        int sum = n1+n2;
        sum = sum + n;
        cout<<sum<<endl;
    }
}


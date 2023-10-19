#include<iostream>
using namespace std;
int totalDigits(int number);
int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<"Total number of digits : ";
    cout<<totalDigits(number);
}
int totalDigits(int number)
{   
    int sum = 1;
    while(number>=10)
    {
     number = number/10 ;
    sum = sum + 1;
    }
    return sum;
}
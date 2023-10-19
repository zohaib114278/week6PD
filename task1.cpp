#include<iostream>
using namespace std;
void printTable(int number);
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    printTable(number);
}
void printTable(int number){
    for(int n=1;n<=10;n++)
    {
        cout<<number<<"*"<<n<<"="<<number*n<<endl;
    }
}
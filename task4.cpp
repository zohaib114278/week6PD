#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter a number : "<<endl;
	cin>>number;
	int digit;
	cout<<"Enter digit : "<<endl;
	cin>>digit;
	while(number>0)
	{
		number = number%10;
		if(number==digit)
		{
			int result=result+1;
			cout<<"Result is :"<<result;
		}
		cout<<"NUmber after midulous : "<<number;
		number = number/10;
		
	}

}
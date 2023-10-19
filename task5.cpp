#include<iostream>

using namespace std;

int main()

{
	
	int number,sum=0;
	
	cout<<"Enter a number : "<<endl;
	
	cin>>number;
   
	 while(number>0)
    
	{
        
	int r =number%10;
        
	sum=sum+r;
        
	number=number/10;
            
    
	}
   
	cout<<"Sum is : "<<sum<<endl;

}
#include<iostream>

using namespace std;

int main()
	
{
    	
	int a,b,i,gcd,lcm;
	
	cout<<"Enter a :"<<endl;
	
	cin>>a;
	
	cout<<"Enter b : "<<endl;
	
	cin>>b;
	
	for(i=1;i<=a&&i<=b;i++)

	{
	    
		if(a%i==0&&b%i==0)
	    
			{
	        
				gcd=i;
	    
			}
	
	}
	cout<<"GCD IS : "<<gcd<<endl;
    
	lcm=(a*b)/gcd;
    
	cout<<"LCM IS :"<<lcm<<endl;

}

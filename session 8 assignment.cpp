#include <iostream>
using namespace std;
float beans(float r);

float Total, bill, percentage, consumed;
	float beans(float r)
	{
		
		
		bill = consumed * r;
		percentage = bill * 0.02;
		Total=bill+percentage;
		
		cout<<"Amount of water consumed: "<<bill<<endl;
		cout<<"Rural Water Project and Fire Service: "<<percentage<<endl;
		cout<<"Amount Payable: "<<Total<<endl;
	}
	
int main()
	{
		string name;
	
		
		cout<<"Enter Your Account Name \n";
		cin>>name;
		cout<<"Enter Amount of water consumed(Gallons)"<<endl;
		cin>>consumed;
		
		if(consumed<=500)
		{
			beans(0.15);
		}
		else if(consumed>500 && consumed<=1000)
		{
			beans(0.25);
		}
		else
		{
			beans(0.30);
		}
		
		return 0;
	}
	


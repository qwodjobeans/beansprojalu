#include <iostream>
using namespace std;

float Height, FHeight, GHeight,LHeight, NHeight, IHeight;
float Width, FWidth, GWidth, LWidth, NWidth;
int Total, CalcQW, CalcQH, CalcQE;
float *QH;


frame()
{
	
	FHeight= Height - 5;
	FWidth= Width - 5;
	

	
	cout<<"Frame Height "<<FHeight<<endl;
	cout<<"Frame Width "<<FWidth<<endl;
	
	
	
}

Leaf()
{
	LHeight= Height-60;
	LWidth= (Width/2)-5;
	
	cout<<"Leaf Height "<<LHeight<<endl;
	cout<<"Leaf Width "<<LWidth<<endl;
}

NetInner()
{
	NHeight=LHeight-10;
	NWidth=LWidth;
	
	cout<<"Net Inner Height "<<NHeight<<endl;
	cout<<"Net Inner Width "<<NWidth<<endl;
}

Glass()
{
	GHeight=LHeight -100;
	GWidth=LWidth-100;
	
	cout<<"Glass Height "<<GHeight<<endl;
	cout<<"Glass Width "<<GWidth<<endl;
}
CalcT()
{
	
}
int main()

{
	float *QH=&Height;
	
	cout<<"Enter number of windows"<<endl;
	cin>>Total;
	
	for(int n;n<Total;n++)
	{
		
	cout<<"Enter window height "<<endl;
	cin>>Height;
	cout<<"Enter window width "<<endl;
	cin>>Width;
	
	frame();
	
	Leaf();
	
	NetInner();
	
	Glass();
	
	
	cout<<*QH<<endl;
}
 } 

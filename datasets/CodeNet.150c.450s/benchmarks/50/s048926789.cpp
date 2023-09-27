#include<iostream>
using namespace std;

int main()
{
	int a;
	
	while(true)
	{
		int h=0;
	cin>>a;
	a=1000-a;
	if(a==1000)return 0;
	while(a>=500)
	{
		a=a-500;
		h=h+1;
		
	}
	while(a>=100)
	{
	a=a-100;
	h=h+1;
	}
	while(a>=50)
	{
	a=a-50;
	h=h+1;
	}
	while(a>=10)
	{
	a=a-10;
	h=h+1;
	}
	while(a>=5)
	{
	a=a-5;
	h=h+1;
	}
	while(a>=1)
	{
	a=a-1;
	h=h+1;
	}
	cout<<h<<endl;
}

		return 0;

}
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d=0,f;
	while(cin>>a>>b>>c)
	{
		for(int i=a;i<=b;i++)
	{
		f=c%i;
		if(f==0)
		d++;
	}
	cout<<d<<endl;
	}
	    

		


	

}
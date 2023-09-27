#include <iostream>
using namespace std;


int main()
{
	int a, b, c;
	cin >>a>>b;
	if((a==0)&&(b==0))
	{
		return 0;
	}
	else
	{
		do
		{
			if(a>b)
		    {
			c=a;
			a=b;
			b=c;
		    }
		    else{}
		    cout <<a<<" "<<b<<"\n";
		    cin >>a>>b;
		}
		while((a!=0)||(b!=0));
		return 0;
	}
}
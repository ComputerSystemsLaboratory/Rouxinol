#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n=0; 
		while (cin>>a>>b)
		{
		
		c=a+b;
		while(c!=0)
		{
			c=c/10;
			n=n+1;
			
		}
		cout<<n<<endl;
		n=0;
	    }
} 
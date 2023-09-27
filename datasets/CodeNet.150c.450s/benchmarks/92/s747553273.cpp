#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{ 
		int x=a+b;
		int n=0; 
		while(x) 
		{ 
			n++;
			x/=10;
		}
		cout<<n<<endl;
	} 
	return 0;
}
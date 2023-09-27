#include <iostream>
using namespace std;

int main ()
{
	int m[13]={0,4,7,1,4,6,2,4,7,3,5,1,3};
	string a[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int M,D;
	while(cin>>M>>D&&M&&D)
	{
		int x=m[M]-2;
		cout<<a[(x+D)%7]<<endl;
		
	}
	
	
	
	
}
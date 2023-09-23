#include <iostream>
using namespace std;


int main()
{	
		int a[3];
		int c =0;
		cin>>a[0]>>a[1]>>a[2];
		for(int b = a[0];b<a[1]+1;b++)
			if(a[2]%b==0)
				c++;
		cout<<c<<endl;
		return 0;
}
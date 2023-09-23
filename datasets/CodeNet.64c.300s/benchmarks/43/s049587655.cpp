#include <iostream>
using namespace std;
int main(void)
{
	int a,b=0;
	for (int c=0;c<4;c++){
		cin>>a;
		b=b+a;
	}
	int c=0;
	for (int d=0;d<4;d++){
		cin>>a;
		c=c+a;
	}
	if (c>b) cout<<c<<endl;
	else cout<<b<<endl;
	return 0;
}
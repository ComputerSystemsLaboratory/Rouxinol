#include <iostream>
using namespace std;

int main()
{
	int d,i,s,c;
	while(cin>>d){
		s = 0;
		c = 600/d;
		for(i = 1; i < c; i++)
		{
			s += d * (d * i) * (d * i);
		}
		cout<<s<<endl;
	}
	return 0;
}
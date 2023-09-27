#include<iostream>

using namespace std;

int main()
{
	int d,s_d;
	int fx;
	
	for(;cin >> d;)
	{
		fx=0;
		
		for(s_d=d;d<600;d+=s_d)
			fx+=d*d*s_d;
		
		cout << fx << endl;
	}
}
#include <iostream>

using namespace std;

int main()
{
	int a, b,c;
	cin>>a>>b>>c;
	if (a >= b)
	{
		cout<<"No"<<endl;
		return 0;
	}
	else if (b >= c)
	{
		cout<<"No"<<endl;
		return 0;
	}
	else
	{
		cout<<"Yes"<<endl;
		return 0;
	}
	return 0;
}
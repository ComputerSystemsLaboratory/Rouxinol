#include <iostream>
using namespace std;

inline int F(int x)
{
	return x*x;
}

int main()
{
	int d;
	while(cin >> d)
	{
		int n=600/d;
		int area=0;

		for(int i=0; i<n; ++i)
		{
			area += F(i*d)*d;
		}

		cout << area << '\n';
	}
}
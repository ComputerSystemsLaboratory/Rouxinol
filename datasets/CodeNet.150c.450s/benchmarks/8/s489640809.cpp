#include <iostream>
#include <string>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int n,a = 0,b = 0;
	cin >> n;
	rep(i,n)
	{
		string s,s2;
		cin >> s >> s2;
		if(s > s2) a += 3;
		else if(s < s2) b += 3;
		else
		{
			a++;
			b++;
		}
	}

	cout << a << " " << b << endl;
	return 0;
}
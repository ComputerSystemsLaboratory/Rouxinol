#include <iostream>
#include <string>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	string s;
	while(cin >> s && s != "0")
	{
		int sum = 0;
		rep(i,s.size())
		{
			sum += s[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}
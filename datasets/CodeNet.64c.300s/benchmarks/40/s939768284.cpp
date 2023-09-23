#include <iostream>
#include <string>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	string s;
	getline(cin,s);

	rep(i,s.size())
	{
		if('a' <= s[i] && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		else if('A' <= s[i] && s[i] <= 'Z')
		{
			s[i] += 32;
		}
		cout << s[i];
	}
	cout << endl;
	return 0;
}
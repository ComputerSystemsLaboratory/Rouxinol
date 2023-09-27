#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin >> n;
	int a = 0, b = 0, c = 0, d = 0;
	for(int i = 1;i <= n;i++)
	{
		string s;
		cin >> s;
		if(s == "AC")
			a++;
		else if(s == "WA")
			b++;
		else if(s == "TLE")
			c++;
		else
			d++;
	}
	cout << "AC" << " " << "x" << " " << a << "\n";
	cout << "WA" << " " << "x" << " " << b << "\n";
	cout << "TLE" << " " << "x" << " " << c << "\n";
	cout << "RE" << " " << "x" << " " << d << "\n";
	return 0;
}

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	while(N--)
	{
		string s;
		cin >> s;

		set<string> ret;
		for(int i=1; i<s.size(); i++)
		{
			string a=s.substr(0,i);
			string b=s.substr(i,s.size()-i);
			string c=a; reverse(c.begin(), c.end());
			string d=b; reverse(d.begin(), d.end());

			ret.insert(a+b);
			ret.insert(b+a);
			ret.insert(a+d);
			ret.insert(d+a);
			ret.insert(b+c);
			ret.insert(c+b);
			ret.insert(c+d);
			ret.insert(d+c);
		}

		cout << ret.size() << endl;
	}
}
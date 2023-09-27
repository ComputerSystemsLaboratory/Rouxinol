#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int a, b;
	stringstream ss;
	while (cin >> a >> b)
	{
		a += b;
		string s;
		ss << a; ss >> s; ss.clear();
		cout << static_cast<int>(s.size()) << endl;
	}
	return 0;
}
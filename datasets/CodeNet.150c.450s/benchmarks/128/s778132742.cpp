#include <iostream>
#include <string>

using namespace std;

void solve()
{
	string str;
	cin >> str;
	for(int i = str.size() - 1; i >= 0; --i)
	{
		cout << str[i];
	}
	cout << endl;
}

int main()
{
	solve();
	return(0);
}
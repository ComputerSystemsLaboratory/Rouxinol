#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c;
	string s;

	cin >> a >> b >> c;
	
	if (a < b && b < c) s = "Yes";
	else s = "No";

	cout << s << endl;

	return 0;
}


#include <iostream>

using namespace std;

void solve()
{
	int S;
	cin >> S;
	int h = S / 3600;
	S %= 3600;
	int m = S / 60;
	S %= 60;
	int s = S;
	cout << h << ":" << m << ":" << s << endl;
}

int main()
{
	solve();
	return(0);
}
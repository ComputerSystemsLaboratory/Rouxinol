#include <iostream>

using std::cin;
using std::cout;

int n;
int A[2000];

bool fanc(int loc,int num)
{
	if (num == 0){ return true; }
	if (num<0||loc >= n){ return false; }
	if (fanc(loc + 1, num - A[loc]))return true;
	if (fanc(loc + 1, num))return true;
	return false;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int m;

	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	cin >> m;
	int a;
	for (size_t i = 0; i < m; i++)
	{
		cin >> a;
		if (fanc(0, a)){ cout << "yes\n"; }
		else{ cout << "no\n"; }
	}

	return 0;
}
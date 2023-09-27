#include<iostream>
#include<sstream>

using namespace std;

int A[20];
int n;

bool solve(int i, int m)
{
	if (m == 0)return true;
	else if (i >= n || m < 0)return false;
	else return solve(i + 1, m) || solve(i + 1, m - A[i]);
}

int main()
{
	int i, q, m;
	stringstream s;
	cin >> n;
	for (i = 0; i < n; i++)cin >> A[i];
	cin >> q;
	for (i = 0; i < q; i++)
	{
		cin >> m;
		if (solve(0, m))s << "yes" << endl;
		else s << "no" << endl;
	}
	cout << s.str();
    return 0;
}
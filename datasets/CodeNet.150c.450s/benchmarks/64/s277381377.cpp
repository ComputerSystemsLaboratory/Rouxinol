#include<iostream>

using namespace std;

int A[50];
int q;
int n;
bool solve(int i, int m)
{
	if (!m) return true;
	if (i >= n) return false;
	bool flag = solve(i+1, m) || solve(i+1, m-A[i]);
	return flag;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	cin >> q;
	while (q)
	{
		q--;
		int m;
		cin >> m;
		if (solve(0, m))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}

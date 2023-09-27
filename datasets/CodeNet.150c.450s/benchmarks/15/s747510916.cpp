#include<iostream>

using namespace std;

int main()
{
	int i, j, n, q, count = 0, key;
	int s[10001];
	cin >> n;
	for (i = 0; i < n; i++)cin >> s[i];
	cin >> q;
	for (i = 0; i < q; i++)
	{
		cin >> key;
		j = 0;
		s[n] = key;
		while (s[j] != key)j++;
		if (j != n)count++;
	}
	cout << count << endl;
    return 0;
}
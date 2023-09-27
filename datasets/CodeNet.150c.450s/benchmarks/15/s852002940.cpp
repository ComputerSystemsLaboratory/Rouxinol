#include <iostream>

using namespace std;

int liner_search(int elements[], int n, int key)
{
	for (int i = 0; i < n; i++)
		if (elements[i] == key) return 1;
	return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, q, count = 0;
	int S[10000];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> S[i];
	
	cin >> q;
	for (int i = 0; i < q; i++) {
		int t;
		cin >> t;
		count += liner_search(S, n, t);
	}

	cout << count << endl;

	return 0;
}
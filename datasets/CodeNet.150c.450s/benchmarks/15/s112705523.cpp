#include <iostream>
using namespace std;

int linesearch(int a[], int n,int key)
{
	for (int i = 0; i < n; i++) {
		if (a[i] == key) return 1;
	}
	return false;
}

int main()
{
	int n, q,t,sum=0;
	int s[10100];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i];
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> t;
		sum += linesearch(s, n, t);
	}
	cout << sum << endl;
	return 0;
}
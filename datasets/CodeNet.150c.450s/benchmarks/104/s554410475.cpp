#include <iostream>
using namespace std;

int main()
{
	int w, n, a[30], b[30], ans[30];
	char dummy;

	cin >> w >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> dummy >> b[i];
	}

	for (int i = 0; i < w; i++)
		ans[i] = i+1;

	for (int i = 0; i < n; i++)
		swap(ans[a[i]-1], ans[b[i]-1]);

	for (int i = 0; i < w; i++)
		cout << ans[i] << endl;

	return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	while (1){
		int n, a[5001] = { 0 };
		cin >> n;
		if (n == 0)break;
		a[0] = 0;
		int maxv = -100000;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		for (int i = 1; i <= n; i++){
			a[i] = max(a[i - 1] + a[i], a[i]);
			maxv = max(a[i], maxv);
			if (maxv < a[i])
				maxv = a[i];
		}
		cout << maxv << endl;
	}
	return 0;
}
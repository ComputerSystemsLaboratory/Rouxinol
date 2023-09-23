#include <iostream>

using namespace std;

int main()
{
	int n;

	while (1)
	{
		int a[5001] = {0}, s[5001] = {0}, max;

		cin >> n;
		if(n == 0)	break;

		for (int i=1; i<=n; i++)	//入力
			cin >> a[i];

		for (int i=1; i<=n; i++) {
			for (int j=1; j<=i; j++) {
				s[i] += a[j];		//s[i] = a[1]+a[2]+...+a[i]
			}
		}

		max = s[1];

		//int cont = 0;	//Debug
		for (int i=1; i<=n; i++) {
			for (int j=1; j<=i; j++) {
				//if (max < s[i] - s[j-1]) cout << j << '-' << i << ", max = " << s[i] - s[j-1] << endl;	//Debug
				max = (max < s[i] - s[j-1]) ? s[i] - s[j-1] : max;	//区間i,jの和を求めて比較
				//cont++;	//Debug
			}
		}

		cout << max << endl;
		//cout << cont << endl;
	}

	return 0;
}
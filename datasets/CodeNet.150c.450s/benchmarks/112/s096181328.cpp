#include<iostream>
using namespace std;


int main()
{
	while (1){
		int n;
		char qq[1000], ww[1000];
		cin >> n;
		if (n == 0)break;
		for (int i = 0; i < n; i++)
		{
			cin >> qq[i] >> ww[i];
		}
		int len = 0;
		cin >> len;
		while (len--)
		{
			char u;
			cin >> u;
			for (int i = 0; i < n; i++)
			{
				if (qq[i] == u){
					u = ww[i];
					cout << u;
					break;
				}
				if (qq[i] != u&&i == n - 1)
				{
					cout << u;
					break;
				}
			}
		}
		cout << endl;
	}




	return 0;
}
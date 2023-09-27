// 2014/08/30 Tazoe

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;

		if(n==0)
			break;

		int a[5000];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}

		int DP[5000];
		DP[0] = a[0];
		int s_max = DP[0];

		for(int i=1; i<n; i++){
			DP[i] = max(DP[i-1]+a[i], a[i]);

			s_max = max(s_max, DP[i]);
		}

		cout << s_max << endl;
	}

	return 0;
}
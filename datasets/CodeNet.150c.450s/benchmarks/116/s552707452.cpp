#include <iostream>
#include <algorithm>

using namespace std;

int main( void )
{
	int n, k, input[100000];
	while(cin >> n >> k, n | k) {
		int sum = 0;
		for(int i=0; i < n; ++i) {
			cin >> input[i];
			if(i < k) sum += input[i];
		}
		int i, j, ans = sum;
		i = 0; j = k-1;
		while(j < n-1) {
			sum -= input[i++];
			sum += input[++j];
			ans = max(ans, sum);
		}
		cout << ans << endl;
	}
	return 0;
}
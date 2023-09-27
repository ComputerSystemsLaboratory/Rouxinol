#include <iostream>
#include <cstdio>
#define INF 1e+18
#define int long long
using namespace std;

signed main(){
	int n;
	while(cin >> n,n){
		int mi = INF,ma = 0,sum = 0;
		for(int i = 0;i < n;i++){
			int t;
			cin >> t;
			mi = min(t,mi);
			ma = max(t,ma);
			sum += t;
		}
		sum -= (mi + ma);
		cout << sum / (n - 2) << endl;
	}
	return 0;
}
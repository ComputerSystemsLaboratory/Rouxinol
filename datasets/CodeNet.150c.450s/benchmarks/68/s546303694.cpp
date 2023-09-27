#include <bits/stdc++.h>
#define int long long
#define INF 1e+18
using namespace std;

signed main(){
	int n;
	while(cin >> n,n){
		int a[1010],mi = INF;
		for(int i = 0;i < n;i++) cin >> a[i];
		for(int i = 0;i < n;i++){
			for(int j = i + 1;j < n;j++) mi = min(mi,abs(a[i] - a[j]));
		}
		cout << mi << endl;
	}
}

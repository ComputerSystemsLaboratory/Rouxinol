#include <bits/stdc++.h>
using namespace std;

int n;
template <class T>
void readVector(int n, vector<T> &v){
	for(int i=0; i<n; ++i){
		T t;
		cin >> t;
		v.push_back(t);
	}
}

int main(){
//	cin.tie(0);
//	ios::sync_with_stdio(false);
	while(1){
		cin >> n;
		if(n == 0) return 0;
		vector<int> a;
		readVector(n, a);
		sort(a.begin(), a.end());
		int ans = 1e9+7;
		for(int i=1; i<n; ++i)
			ans = min(ans, a[i] - a[i-1]);
		cout << ans << "\n";
	}
}

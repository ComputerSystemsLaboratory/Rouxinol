#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
//	cin.tie(0);
//	ios::sync_with_stdio(false);
	while(true){
		cin >> n;
		if(n == 0) return 0;
		vector<int> v;
		for(int i=0; i<n; ++i){
			int t;
			cin >> t;
			v.push_back(t);
		}
		int sum = 0;
		sort(v.begin(), v.end());
		for(int i=1; i<n-1; ++i)
			sum += v[i];
		sum /= n-2;
		cout << sum << "\n";
	}
}

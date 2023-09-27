#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, x;
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
		cin >> n >> a >> b >> c >> x;
		if(n == 0 && a == 0 && b == 0 && c == 0 && x == 0)
			return 0;
		vector<int> y;
		readVector(n, y);
		int t = 0;
		for(int i=0; i<=10000; ++i){
			if(x == y[t]) ++t;
			x = (a * x + b) % c;
			if(t == n){
				cout << i << "\n";
				break;
			}
		}
		if(t < n) cout << "-1\n";
	}
}

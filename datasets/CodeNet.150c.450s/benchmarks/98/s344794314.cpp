#include <bits/stdc++.h>
using namespace std;

int n, m;
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
		cin >> n >> m;
		if(n == 0 && m == 0) return 0;
		vector<int> a, b;
		readVector(n, a);
		readVector(m, b);
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int s = 0, t = 0;
		for(auto i : a) s += i;
		for(auto i : b) t += i;
		bool f = false;
		for(int i=0; i<n&&!f; ++i)
			for(int j=0; j<m; ++j)
				if(2 * (a[i] - b[j]) == s - t){
					cout << a[i] << " " << b[j] << "\n";
					f = true;
					break;
				}
		if(!f) cout << "-1\n";
	}
}

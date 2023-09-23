#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
//	cin.tie(0);
//	ios::sync_with_stdio(false);
	while(1){
		cin >> n;
		if(n == 0) return 0;
		int cnt = 0;
		for(int i=1; i<n; ++i){
			int tmp = 0;
			int j = 0;
			while(tmp < n){
				tmp += i + j;
				++j;
				if(tmp == n) ++cnt;
			}
		}
		cout << cnt << "\n";
	}
}

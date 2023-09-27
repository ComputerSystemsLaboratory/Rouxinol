#include <bits/stdc++.h>
using namespace std;

int main(){
	while(1){
		int n, p;
		cin >> n >> p;
		if(n + p == 0) break;
		int d[51] = {};
		int now = p;
		int t = 0;
		int ans = -1;
		for(int i = 0;; i++){
			t = i % n;
			if(now >= 1){
				now--;
				d[t]++;
			}else if(now == 0){
				now = d[t];
				d[t] = 0;
			}
			if(d[t] == p){
				ans = t;
				break;
			}
		}
		cout << ans << endl;
	}
}
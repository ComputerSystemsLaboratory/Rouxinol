#include <bits/stdc++.h>
using namespace std;

int main(void){
	long long n, a, b, c, x;
	while(true){
		cin >> n >> a >> b >> c >> x;
		if(!n&&!a&&!b&&!c&&!x) break;
		vector<int> y(n);
		for(int i = 0; i < n; ++i){
			cin >> y[i];
		}
		int i, j;
		for(i = 0, j = 0; i <= 10000; ++i){
			if(y[j] == x) j++;
			if(j == y.size()) break;
			x = (a * x + b) % c;
		}
		if(j == y.size()){
			cout << i << endl;
		}else{
			cout << -1 << endl;
		}
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, c, x;
	while(cin >> n >> a >> b >> c >> x && (n || a || b || c || x)){
		int y[200], now = 0;
		bool ended = false;
		for(int i = 0; i < n; ++i)
			cin >> y[i];
		for(int f = 0; f <= 10000; ++f){
			if(y[now] == x)
				now++;
			if(now == n){
				cout << f << endl;
				ended = true;
				break;
			}
			x = (a * x + b) % c;
		}
		if(!ended)
			cout << "-1" << endl;
	}
	return 0;
}
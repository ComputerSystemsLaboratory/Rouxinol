#include <bits/stdc++.h>
using namespace std;

int n;
int y, m, d;

int main(){
//	cin.tie(0);
//	ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> y >> m >> d;
		int t = 0;
		while(1){
			if(y == 1000 && m == 1 && d == 1) break;
			++t;
			++d;
			if(d == 21){
				d = 1;
				++m;
				if(m == 11){
					m = 1;
					++y;
				}
			}else if(d == 20 && y % 3 != 0 && m % 2 == 0){
				d = 1;
				++m;
				if(m == 11){
					m = 1;
					++y;
				}
			}
		}
		cout << t << "\n";
	}
}

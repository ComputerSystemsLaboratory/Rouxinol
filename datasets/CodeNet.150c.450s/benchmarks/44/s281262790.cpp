#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+9 * 2;
double eps = 1e-10;

int main() {
	int a[4], b[4];
	while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){
		bool cnt[16] = {0};
		int hit = 0, blow = 0;
		for(int i = 0; i < 4; ++i)
			cnt[a[i]] = true;
		for(int i = 0; i < 4; ++i){
			if(cnt[b[i]]){
				if(a[i] == b[i])
					hit++;
				else
					blow++;
			}
		}
		cout << hit << " " << blow << endl;
	}
	return 0;
}
// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[4], b[4];
	while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){
		int hit = 0, blow = 0;
		for(int i = 0; i < 4; i++){
			if(b[i] == a[i])hit++;
			else if(find(a, a + 4, b[i]) - a != 4)blow++;
		}
		cout << hit << ' ' << blow << '\n';
	}
	return 0;
}

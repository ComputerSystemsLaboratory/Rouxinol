#ifndef ONLINE_JUDGE
#endif
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <bitset>
#include <string>
using namespace std;
const int maxn = 1e4+5;
bitset<maxn>b[maxn];

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	#endif
	int r, c;
	while(scanf("%d%d", &r, &c) && r){
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				int t;
				scanf("%d", &t);
				b[i][j] = t;
			}
		}
		int ans = 0;
		for(int i = 0; i < (1<<r); i++){
			for(int j = 0; j < r; j++){
				if(i & (1 << j)){
					b[j].flip();
				}
			}
			int sum = 0;
			for(int j = 0; j < c; j++){
				int t = 0;
				for(int k = 0; k < r; k++){
					if(b[k][j]) t++;
				}
				sum += min(t, r-t);
			}
			ans = max(ans, r*c-sum);
			for(int j = 0; j < r; j++){
				if(i & (1 << j)){
					b[j].flip();
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}


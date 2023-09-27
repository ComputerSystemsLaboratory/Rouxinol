#include <iostream>
#include <cstdio>
#include <queue>
#define INF 1e+18
#define int long long
using namespace std;

signed main(){
	int n,p;
	while(cin >> n >> p,n){
		int wan = p,cnt[50] = {},pos = 0;
		while(1){
			if(wan == 0){
				int win = 0,m;
				for(int i = 0;i < n;i++){
					if(cnt[i]){
						win++;
						m = i;
					}
				}
				if(win == 1){
					cout << m << endl;
					break;
				}
				wan += cnt[pos];
				cnt[pos] = 0;
			}else{
				wan--;
				cnt[pos]++;
			}
			pos = (pos + 1) % n;
		}
	}
	return 0;
}
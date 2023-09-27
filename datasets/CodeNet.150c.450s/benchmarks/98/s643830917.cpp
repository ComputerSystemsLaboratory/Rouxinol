#include <iostream>
#define INF 1e+9
using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m,n){
		int st[100],sh[100],sumt = 0,sumh = 0,mi = INF,a,b;
		for(int i = 0;i < n;i++){
			cin >> st[i];
			sumt += st[i];
		}
		for(int i = 0;i < m;i++){
			cin >> sh[i];
			sumh += sh[i];
		}
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				if((sh[j] - st[i]) * 2 == sumh - sumt){
					if(mi > sh[j] + st[i]){
						a = i;
						b = j;
						mi = sh[j] + st[i];
					}
				}
			}
		}
		if(mi == INF) cout << -1 << endl;
		else cout << st[a] << " " << sh[b] << endl;
	}
	return 0;
}
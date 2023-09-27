#include <bits/stdc++.h>
using namespace std;
#define INF 100000005
#define MAX 200005

int main(){
	int n, m, a[101], b[101], t1, t2, v;
	pair<int, int> p[10002];
	while(cin >> n >> m, n){
		v = t1 = t2 = 0;
		for(int i = 0;i < n;i++)cin >> a[i], t1 += a[i];
		for(int i = 0;i < m;i++)cin >> b[i], t2 += b[i];
		int tt = t1-t2;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				if(2*(a[i]-b[j]) == tt){
					p[v].first = a[i];
					p[v++].second = b[j];
				}
			}
		}
		//cout << v << "*" << endl;
		int mm[3] = {-1, -1, INF};
		for(int i = 0;i < v;i++){
			if(p[i].first + p[i].second < mm[2]){
				mm[0] = p[i].first;
				mm[1] = p[i].second;
				mm[2] = mm[0]+mm[1];
			}
		}
		if(mm[2] == INF)cout << -1 << endl;
		else cout << mm[0] << " " << mm[1] << endl;
	}
	return 0;
}
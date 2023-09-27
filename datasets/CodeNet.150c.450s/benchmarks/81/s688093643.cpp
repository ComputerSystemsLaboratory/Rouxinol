#include <iostream>
#define INF 1000000
using namespace std;
int main(){
	int n;
	while(cin >> n,n){
		int r[10][10];
		int m = 0;
		for(int i = 0; i < 10;++i)for(int j = 0; j < 10; ++j){
			r[i][j] = INF;
		}
		for(int i = 0; i < n; ++i){
			int a,b,c;
			cin >> a >> b >> c;
			r[a][b] = r[b][a] = c;
			m = max(max(a,b),m);
		}
		++m;
		for(int i = 0; i < m; ++i)r[i][i] = 0;
		for(int k = 0; k < m; ++k){
			for(int i = 0; i < m; ++i){
				for(int j = 0; j < m; ++j){
					r[i][j] = min(r[i][k]+r[k][j],r[i][j]);
				}
			}
		}
		int ans = INF;
		int t = 0;
		for(int i = 0; i < m; ++i){
			int tmp = 0;
			for(int j = 0; j < m; ++j){
				tmp += r[i][j];
			}
			if(ans > tmp){
				ans = tmp;
				t = i;
			}
		}
		cout << t << " " << ans << endl;
	}
}
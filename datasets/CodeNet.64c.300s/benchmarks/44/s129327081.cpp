#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n,n){
		int map[10][10];
		int m = 0;
		for(int i = 0 ;i < 10; i++){
			for(int j = 0; j < 10; j++){
				if(i == j) map[i][j] = 0;
				else map[i][j] = 10000000;
			}
		}
		for(int i = 0 ; i< n; i++){
			int a,b,c;
			cin >> a >> b >> c;
			m = max(max(a,b),m);
			map[a][b] = map[b][a] = c;
		}
		for(int k = 0; k <= m; k++){
			for(int i = 0; i <= m; i++){
				for(int j = 0; j <= m; j++){
					map[i][j] = min(map[i][j],map[i][k]+map[k][j]);
				}
			}
		}
		int ans[10] = {};
		for(int i = 0 ; i<=m; i++)for(int j = 0 ; j <= m; j++)ans[i] += map[i][j];
		int a = 0;
		for(int i = 0; i <= m; i++){
			if(ans[i] < ans[a]) a = i;
		}
		cout << a << " " << ans[a] << endl;
	}
}
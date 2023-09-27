#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin >> n , n){
		int a,b,c;
		int g[12][12];
		for(int i = 0; i < 12; i++)
			for(int j = 0; j < 12; j++){
				if(i == j)
					g[i][j] = 0;
				else
					g[i][j] = 100000000;
			}
		int judge[12] = {0};
		for(int i = 0; i < n; i++){
			cin >> a >> b >> c;
			g[a][b] = c;
			g[b][a] = c;
			judge[a] = judge[b] = 1;
		}
		vector <int> used;
		vector <int> dist;
		int ans = 100000000,num;
		for(int i = 0; i < 11; i++){
			if(!judge[i])
				continue;
			used = vector <int> (11,0);
			dist = vector <int> (11,100000000);
			dist[i] = 0;
			int sum = 0;
			while(1){
				int va = -1;
				for(int j = 0; j < 11; j++){
					if(!judge[j])
						continue;
					if(used[j] == 0 && (va == -1 || dist[va] > dist[j]))
						va = j;
				}
				if(va == -1)
					break;
				used[va] = 1;
				for(int j = 0; j < 11; j++){
					if(!judge[j])
						continue;
					dist[j] = min(dist[j] , dist[va] + g[j][va]);
				}
			}
			for(int j = 0; j < 11; j++){
				if(!judge[j])
					continue;
				sum += dist[j];
			}
			if(ans > sum){
				ans = sum;
				num = i;
			}
		}
		cout << num << " " << ans << endl;
	}
	return 0;
}
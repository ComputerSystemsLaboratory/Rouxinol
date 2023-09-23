#include <iostream>
using namespace std;
#define rep2(x,from,to) for(int x=(from);x<(to);++(x))
#define rep(x,to) rep2(x,0,to)
#define inf 99999999
int main(){
	int n,a,b,c;
	int cost[64][64];
	while(cin >> n, n) {
		rep(i,64) {
			rep(j,64) {
				cost[i][j] = inf;
			}
		}
		int max = 0;
		rep(i,n) {
			cin >> a >> b >> c;
			cost[a][b] = c;
			cost[b][a] = c;
			cost[a][a] = 0;
			cost[b][b] = 0;
			if(max < a) max = a;
			if(max < b) max = b;
		}

		rep(i,max+1) {
			rep(j,max+1) {
				rep(k,max+1) {
					int len = cost[j][i] + cost[i][k];
					if(len < cost[j][k]) {
						cost[j][k] = len;
					}
				}
			}
		}
		int min = inf, rmin = -1;
		rep(i,max+1) {
			int ret = 0;
			rep(j,max+1) {
				ret += cost[i][j];
			}
			if(min > ret) {
				min = ret;
				rmin = i;
			}
		}
		cout << rmin << " " << min << endl;
	}
	return 0;
}
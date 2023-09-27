#include <cstdio>
#include <queue>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <bitset>
#include <cmath>
#include <algorithm>
#include <functional>
#include <string.h>
using namespace std;
const int INF = 1<<28;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,start,end) for(int i=(start);i<(end);++i)
#define pint(i) printf("%d\n",(i))
#define pint2(i,j) printf("%d %d\n",(i),(j))
#define pint3(i,j,k) printf("%d %d %d\n",(i),(j),(k))
#define gint(i) scanf("%d",&(i))
#define gint2(i,j) scanf("%d %d",&(i),&(j))
#define gint3(i,j,k) scanf("%d %d %d",&(i),&(j),&(k))
#define init(tar,val) memset((tar),(val),sizeof((tar)))
#define show(tar,len) for(int i=0;i<(len);++i) \
	cout<<tar[i]<<' ';\
	cout<<endl;




int main(){
	//freopen("a.in", "r", stdin);
	int n;
	while (cin >> n && n){
		int cost[10][10];
		rep(i, 0, 10){
			rep(j, 0, 10){
				cost[i][j] = i == j ? 0 : INF;
			}
		}
		rep(i, 0, n){
			int a, b, c;
			cin >> a >> b >> c;
			cost[a][b] = cost[b][a] = c;
		}
		rep(k, 0, 10){
			rep(i, 0, 10){
				rep(j, 0, 10){
					cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
				}
			}
		}
		int out = INF, id = 0;
		rep(i, 0, 10){
			int tmp = 0;
			rep(j, 0, 10){
				if (cost[i][j] < INF)
					tmp += cost[i][j];
			}
			if (tmp && tmp < out){
				out = tmp;
				id = i;
			}
		}
		cout << id << ' ' << out << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define dump1d_arr(array) REP(i,array.size()) cerr << #array << "[" << (i) << "] ==> " << (array[i]) << endl;
#define dump2d_arr(array) REP(i,array.size()) REP(j,array[i].size()) cerr << #array << "[" << (i) << "]" << "[" << (j) << "] ==> " << (array[i][j]) << endl;
#define dump(x)  cerr << #x << " => " << (x) << endl;
#define CLR(vec) { REP(i,vec.size()) vec[i] = 0; } 
#define loINF (long)10000000000
#define shINF (short)10000
#define SORT(c) sort((c).begin(),(c).end())
#define MIN(a, b) ((a) < (b) ? (a) : (b))
using namespace std;
typedef vector<long> VL;
typedef vector<VL> VVL;

VVL dist;

short Warshall_Floyd(long V){
	// 頂点は 0 ~ V 
	REP(i,V+1) dist[i][i] = 0;	//初期化
	FOR(i,0,V){
		FOR(j,0,V){
			FOR(k,0,V){
				if (dist[j][i] == loINF || dist[i][k] == loINF) continue;
				dist[j][k] = MIN(dist[j][k],dist[j][i] + dist[i][k]);
				if (dist[j][j] < 0) return (-1);
			}
		}
	}
	return 0;
}

int main(void){
	long V,E;	//頂点数,辺数
	cin >> V >> E;

	dist = VVL(V+1,VL(V+1,loINF));

	REP(i,E){
		long v1,v2,dis;
		cin >> v1 >> v2 >> dis;
		dist[v1][v2] = dis;
	}
	if (Warshall_Floyd(V) == (-1)) cout << "NEGATIVE CYCLE" << endl;
	else {
		REP(i,V){
			REP(j,V){
				if (dist[i][j] == loINF) cout << "INF";
				else cout << dist[i][j];
				if (j != V-1) cout << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}

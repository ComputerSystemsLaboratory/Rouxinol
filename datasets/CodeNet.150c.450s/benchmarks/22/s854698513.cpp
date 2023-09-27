/*ベルマンフォード法自作ライブラリ*/
/*標準:単一始点からの他の全頂点への最短距離 & 閉ループ判定 ,option1:経路復元(非辞書順) ,option2:単一始点&終点の最短距離。&辞書順経路復元 */
#include <bits/stdc++.h>
#define REP(i,n) for (long i=0;i<(n);i++)
#define FOR(i,a,b) for (long i=(a);i<(b);i++)
#define dump1d_arr(array) REP(i,array.size()) cerr << #array << "[" << (i) << "] ==> " << (array[i]) << endl;
#define dump2d_arr(array) REP(i,array.size()) REP(j,array[i].size()) cerr << #array << "[" << (i) << "]" << "[" << (j) << "] ==> " << (array[i][j]) << endl;
#define dump(x)  cerr << #x << " => " << (x) << endl;
//#define TRACE_ROUTE      // option1
//#define TRACE_ROUTE_DIC  // option2
using namespace std;
typedef struct edge_set {long start;long goal;long w;} ed;
//global変数
vector<ed> edge;	//隣接リスト
vector<long> dis;

#if defined(TRACE_ROUTE) || defined(TRACE_ROUTE_DIC)
	vector<long> pre;
#endif 

short bellman_ford (long start,long V){
	long update_flag = 1;
	long edge_start,edge_end,edge_dis;
	long roop_count = 0;

	while (update_flag) {
		if (++roop_count > V) return -1;
		update_flag = 0;
		REP(i,(long)edge.size()) {	// 辺の始点
			edge_start = edge[i].start;
			edge_end = edge[i].goal;
			edge_dis = edge[i].w;

			if (dis[edge_start] == 2147483647) continue; //まだ候補すらない頂点

			if (dis[edge_start] + edge_dis < dis[edge_end]){
				dis[edge_end] = dis[edge_start] + edge_dis;
				update_flag = 1;

				#if defined(TRACE_ROUTE) || defined(TRACE_ROUTE_DIC)
					pre[edge_end] = edge_start;
				#endif
			}

			#if defined(TRACE_ROUTE) || defined(TRACE_ROUTE_DIC)
			else {
				if (dis[edge_start] + edge_dis == dis[edge_end] && pre[edge_end] > edge_start){
					pre[edge_end] = edge_start;
					update_flag = 1;
				}
			}
			#endif
		}
	}

	return 0;
}

// 経路復元用関数
#ifdef TRACE_ROUTE
string trace_route (long start,long goal) {
	string tmp;
	string route("");
	long ver = goal;
	while (ver != start){
		tmp = ("-" + to_string(ver)) ;
		route = (tmp + route);
		ver = pre[ver];
	}
	route = (to_string(start) + route);
	return route;
}
#endif

// 辞書順経路復元用関数
#ifdef TRACE_ROUTE_DIC
string trace_route_dic(long start,long goal) {
	string route("");
	long ver = start;
	while (ver != goal){
		route += (to_string(ver) + "-");
		ver = pre[ver];
	}
	route += to_string(goal);
	return route;
}

short bellman_ford_dic(long start,long goal,long V){
	short flag = bellman_ford(goal,V);
	if (ans_val == -1) cout << "exist negative loop" << endl;
	
	if (ans_val == 0){
		// 最短距離の表示
		cout << dis[start] << endl;
		// 辞書順の経路復元
		cout << trace_route_dic(start,goal) << endl;
	}
	else cerr << "error" << endl;
}
#endif

/* テンプレの入力フォーマット
V E
v11 v12 dis
v21 v22 dis
.
.
start (goal)
*/

int main(void) {
	long V,E,start;
	long ver1,ver2,weight;

	//入力部分1
	cin >> V >> E; //V:頂点数 , E:辺数
	cin >> start; //始点を入力

	edge = vector<ed>(E); //　辺の端点とコストの組を格納
	dis = vector<long>(V+1,2147483647);			      // 
	//入力部分2
	REP(i,E){ //辺の情報を入力
		cin >> ver1 >> ver2 >> weight;
		/*有向グラフ ver1 ==> ver2 */
		edge[i] = {ver1,ver2,weight};
	}

	dis[start] = 0; //スタート地点は距離0

	#if defined(TRACE_ROUTE) || defined(TRACE_ROUTE_DIC)
		pre = vector<long>(V+1,2147483647);
		pre[start] = start;
	#endif

	// 辞書順の経路復元を行う場合。(2点間のみ)
	#ifdef TRACE_ROUTE_DIC
		long goal
		cin >> goal;
		bellman_ford_dic(start,goal,V); // 辞書順表示用関数	
		exit(0);
	#endif

	// それ以外
	if (bellman_ford(start,V) == (-1)) cout << "NEGATIVE CYCLE" << endl;
	else {
			// 最短距離の表示 dis[i]にstartから頂点iまでの最短距離が格納されている。
			// dis[i] == loINFなら、startと非連結。
			REP(i,V){
				if (dis[i] == 2147483647) cout << "INF" << endl; //非連結
				else {
					cout << dis[i] << endl;
					// 経路復元
					#ifdef TRACE_ROUTE
						cout << trace_route(start,i) << endl;
					#endif
				}
			}
	}
 	return 0;
}


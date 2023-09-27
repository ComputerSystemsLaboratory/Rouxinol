// ダイクストラ法 TLE解法 ==> ワーシャルフロイドで前点間最短距離を求めた方が早い.

#include <bits/stdc++.h>
#define REP(i,n) for (long i=0;i<(n);i++)
#define FOR(i,a,b) for (long i=(a);i<(b);i++)
#define dump1d_arr(array)  REP(i,array.size()) cerr << #array << "[" << (i) << "] ==> " << (array[i]) << endl;
#define dump2d_arr(array,i,j) cerr << #array << "[" << (i) << "]" << "[" << (j) << "] ==> " << (array[i][j]) << endl;
#define dump(x)  cerr << #x << " => " << (x) << endl;
#define dump_pair(pair) cerr << #pair << " ==> (" << pair.first << "," << pair.second << ")" << endl;
#define CLR(vec) { REP(i,vec.size()) vec[i] = 0; } 
#define loINF (long)10000000000
#define shINF (short)30000
#define SORT(c) sort((c).begin(),(c).end())
using namespace std;

typedef pair<long,long> pr;

struct Order {
	bool operator() (pr const& a,pr const& b) const {
		return a.first > b.first || ((a.first == b.first) && (a.second > b.second));
	}
};

typedef priority_queue<pr,vector<pr>,Order> pq;
typedef vector<char> VC;
typedef vector<long> VL;
typedef vector<pr> VP;
typedef vector<VP> VVP;


// global
long V;
VVP cost;
long start;
VL ans;

//入力 
void input_gragh(void){
	long E; 
	long ver1,ver2;
	short dis;

	cin >> V >> E >> start;		//V:頂点数 , E:辺数
	cost = VVP(V+1,VP(0)); // 辺の情報。cost[i] := (辺の先の頂点j,頂点iと頂点jの距離)

	REP(i,E){ //辺の情報を格納する。
		cin >> ver1 >> ver2 >> dis;
		cost[ver1].push_back(make_pair(ver2,dis));
	}

	ans = VL(V+1,loINF);
}

void dijekstra(long start){
	pq distance;
	pr minver;
	long now_ver,next_ver,next_dis;
	VC used(V+1,0);

	distance.push(make_pair(0,start));

	while (!distance.empty()) {
		minver = distance.top();
		distance.pop();
		now_ver = minver.second;
		if (used[now_ver]) continue;
		else {
			used[now_ver] = 1;
			ans[now_ver] = minver.first;
		}
			
		REP(i,cost[now_ver].size()) {
			next_ver = cost[now_ver][i].first;
			next_dis = cost[now_ver][i].second;
			if (used[next_ver]) continue;
			distance.push(make_pair(minver.first+next_dis,next_ver));
		}
	}
}

int main (void){
	input_gragh();
	dijekstra(start); 
	REP(i,V){
		if (ans[i] == loINF) cout << "INF" << endl;
		else  cout << ans[i] << endl;
	}
 	return 0;
}


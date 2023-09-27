#include "bits/stdc++.h"
#define int long long
#define range(i, a, b) for(auto i = a; i < b; i++)
#define rep(i, a) range(i, 0, a)
#define all(a) (a).begin(),(a).end()
using namespace std;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
using vi = vector <int>;
using vvi = vector <vi>;

class Warshall_Floyd{
private:
	vector <vector <int>> G;

public:
	Warshall_Floyd(int v){
		G = vector <vector <int>> (v, vector <int> (v));
		for(int i = 0; i < G.size(); i++)
			for(int j = 0; j < G.size(); j++)
				G[i][j] = i == j ? 0 : INF;
	}

	void addEdge(int start, int end, int cost){
		G[start][end] = cost;
	}

	int dist(int start, int end){
		return G[start][end];
	}

	bool checkNegativeCircle(){
		bool flag = false;
		for (int i = 0; i < G.size(); i++)
			if(G[i][i] < 0)
				flag = true;
		return flag;
	}

	void execute(){
		for(int k = 0; k < G.size(); k++)
			for(int i = 0; i < G.size(); i++)
				for(int j = 0; j < G.size(); j++)
					if(G[i][k] != INF && G[k][j] != INF)
						G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
	}

};

signed main(){
	int v, e;
	cin >> v >> e;

	Warshall_Floyd wf(v);

	rep(i, e){
		int s, t, d;
		cin >> s >> t >> d;
		wf.addEdge(s, t, d);
	}

	wf.execute();

	if(wf.checkNegativeCircle()){
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}

	rep(i, v){
		rep(j, v){
			if(wf.dist(i, j) == INF)
				cout << "INF";
			else
				cout << wf.dist(i, j);
			if(j != v - 1)
				cout << " ";
			else
				cout << endl;
		}
	}
}
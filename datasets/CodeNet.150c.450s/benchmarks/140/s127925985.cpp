#include "bits/stdc++.h"
using namespace std;


#include <chrono>

//?????????
#pragma region MACRO 
#define putans(x)  std::cerr << "[ answer ]: " ; cout << (x) << endl
#define dputans(x) std::cerr << "[ answer ]: "; cout << setprecision(27) << (double)(x) << endl
#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define RREP(i,a,n) for(int i=(int)(n-1); i>= a; i--)
#define rep(i,n) REP(i,0,n)
#define rrep(i,n) RREP(i,0,n)
#define all(a) begin((a)),end((a))
#define mp make_pair
#define exist(container, n) ((container).find((n)) != (container).end())
#define equals(a,b) (fabs((a)-(b)) < EPS)
#ifdef _DEBUG //???????????????????????????????????????????????????
std::ifstream ifs("data.txt");
#define put ifs >>
#else //?????£????????????????????§?????????????????????
#define put cin >>
#endif
#pragma endregion

//???????????°??????????????´
#pragma region CODING_SUPPORT
#ifdef _DEBUG
#define dbg(var0) { std::cerr << ( #var0 ) << "=" << ( var0 ) << endl; }
#define dbg2(var0, var1) { std::cerr << ( #var0 ) << "=" << ( var0 ) << ", "; dbg(var1); }
#define dbg3(var0, var1, var2) { std::cerr << ( #var0 ) << "=" << ( var0 ) << ", "; dbg2(var1, var2); }
#define dbgArray(a,n) {std::cerr << (#a) << "=";  rep(i,n){std::cerr <<(a[i])<<",";} cerr<<endl;} 
#else
#define dbg(var0) {}
#define dbg2(var0, var1) {}
#define dbg3(var0, var1, var2) {}
#define dbgArray(a,n) {}
#endif 
#pragma endregion 
//typedef????????????????????????????¶????????????§?????????
#pragma region TYPE_DEF
typedef long long ll;
typedef pair<int, int> pii; typedef pair<string, string> pss; typedef pair<int, string>pis;
typedef vector<string> vs; typedef vector<int> vi;
#pragma endregion
//??????????????°(???????????????????????§??????)
#pragma region CONST_VAL
#define PI (2*acos(0.0))
#define EPS (1e-10)
#define MOD (ll)(1e9 + 7)
#define INF (ll)(2*1e9)
#pragma endregion

//static const int MAX = 100;
//static const int WHITE = 0;
//static const int GRAY = 1;
//static const int BLACK = 2;
//
//static const int n = 100;
//int d[n][n];
/*
void floyd() {
	rep(k, n) {
		rep(i, n) {
			if (d[i][k] == INF) continue;
			rep(j, n) {
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}

 void topologicalSort() {
	 auto bfs = [&](int s )->void{
		 queue<int> q;
	q.push(s);
	V[s] = true;
	while (!q.empty()) {
		int u = q.front(); q.pop();
		rep(i, G[u].size()) {
			int v = G[u][i];
			indeg[v]--;
			if (indeg[v] == 0 && !V[v]) {
				q.push();
			}
		}
	}
	 };

	 rep(i, n) {
		 indeg[i] = 0;
	 }
	 rep(u, n) {
		 rep(i, G[u].size()) {
			 int v = G[u][i];
			 indeg[v]++;
		 }
		 rep(i, n) {
			 if (indeg[i] == !V[i]) bfs(u);
		 }//????????§???????????????
	 }

}*/

//??????????£?????????°???
//https://www23.atwiki.jp/akitaicpc/pages/65.html


namespace UnionFindTree {
	class UnionFindTree {
	public:
		UnionFindTree(int n);
		~UnionFindTree();
		bool Same(int x, int y);
		void Unite(int x, int y);
		int GetCount();

		void mm() {
		}

	private:
		int* Par;
		int* Rank;
		int Count;
		int Find(int x);
	};

	// n???????´???°???????????????UF??¨
	UnionFindTree::UnionFindTree(int n) {
		Par = new int[n];
		Rank = new int[n];
		Count = n;
		for (int i = 0; i < n; i++) {
			Par[i] = i;
		}
	}

	UnionFindTree::~UnionFindTree() {
		delete( Par );
		delete( Rank );
	}

	int UnionFindTree::Find(int x) {
		if (Par[x] == x)
			return x;
		else {
			Par[x] = Find(Par[x]);
			return Par[x];
		}
	}

	// ??¨??????????±???????
	// x??¨y????±??????????????????????
	void UnionFindTree::Unite(int x, int y) {
		x = Find(x);
		y = Find(y);
		if (x == y) return;
		if (Rank[x] < Rank[y]) {
			Par[x] = y;
		}
		else {
			Par[y] = x;
			if (Rank[x] == Rank[y])Rank[x]++;
		}
	}

	//x??¨y???????????????????±????????????????
	bool UnionFindTree::Same(int x, int y) {
		return Find(x) == Find(y);
	}

	//????´???°????????°?????????
	int UnionFindTree::GetCount() {
		return Count;
	}
}



struct edge { int u, v, cost; };
bool comp(const edge& e1, const edge& e2) {
	return e1.cost < e2.cost;
}

//Kruskal
int V, E;
static const int MAX_E = 100000;
edge es[MAX_E];

int Kruskal() {
	sort(es, es + E, comp);
	UnionFindTree::UnionFindTree ufT(V);
	int res = 0;
	rep(i, E) {
		edge e = es[i];
		if (!ufT.Same(e.u, e.v)) {
			ufT.Unite(e.u, e.v);
			res += e.cost;
		}
	}
	return res;
}


void calc() {
	int v, e; put v >> e;
	V = v; E = e;
	rep(i, e) {
		int from, to, cost;
		put from >> to >> cost;
		es[i] = { from,to,cost };
	}

	cout << Kruskal() << endl;
}




int main() {
	calc();
END:
	return 0;
}
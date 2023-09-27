#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int N, M; cin >> N >> M;
	vector<vector<int>> graph(N);

	REP(i,M){
		int A, B; cin >> A >> B;
		A--; B--;
		graph[A].push_back(B);
		graph[B].push_back(A);
	}

	vector<bool> was(N, false);
	vector<int> prev(N, -1);
	queue<int> q;
	was[0] = true;
	prev[0] = 0;
	q.push(0);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int i:graph[v]){
			if(was[i]) continue;
			q.push(i);
			prev[i] = v+1;
			was[i] = true;
		}
	}


	bool flag = true;
	REP(i,N) if(!was[i]) flag = false;

	if(flag){
		cout << "Yes" << endl;
		FOR(i,1,N) cout << prev[i] << endl;

	}else{
		cout << "No" << endl;
	}


	return 0;

}

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <stack>
#include <functional>
#include <set>
#include <map>
#include <deque>
#define NMAX 100
#define INF 100000000

//??????????????¢??????????????¨debug()??????????????????
#define DEBUG

using namespace std;
template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

typedef pair<int ,int > P;
typedef long long ll;

int N,ans = 0;
int d[NMAX] = {};
vector<P> connect[NMAX];

void solve(){
	d[0] = 0;
	priority_queue<P, vector<P>, greater<P> > que;
	que.push(P(0,0));
	while(!que.empty()){
		P p = que.top();
		// cout << "P(" << p.first << "," << p.second << ")\n";
		que.pop();
		int v = p.first;
		if(d[v] < p.second) continue;
		for (int i = 0; i < connect[v].size(); ++i)
		{
			if(d[connect[v][i].first] > d[v] + connect[v][i].second){
				d[connect[v][i].first] = d[v] + connect[v][i].second;
				que.push(P(connect[v][i].first,d[connect[v][i].first]));
			}
		}
	}
}

void debug(){

}

void answer(){
	for (int i = 0; i < N; ++i)
	{
		cout << i << " " << d[i] << "\n";
	}
}

int main(){
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int a,b;
		cin >> a >> b;
		for (int j = 0; j < b; ++j)
		{
			int k,l;
			cin >> k >> l;
			connect[a].push_back(P(k,l));
		}
	}
	Fill(d,INF);
	solve();
	#ifdef DEBUG
	debug();
	#endif
	answer();

	return 0;
}
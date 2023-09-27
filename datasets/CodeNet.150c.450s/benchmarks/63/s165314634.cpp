#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
int V,E,r;
const int Inf = 10000*100000+100;
ll C[100010];
int main(){
	while(cin >> V >> E >> r && V >0){
		vector< vector< P > > v(V+10);
		for(int i=0;i<E;i++){
			ll s,t,d;
			cin >> s >> t >> d;
			v[s].push_back(make_pair(d,t));
		}
		priority_queue<P> Q;
		Q.push(P(0,r));
		for(int i=0;i<V;i++){
			C[i] = Inf;
		}
		C[r] = 0;
		while(!Q.empty()){
			P t = Q.top();
			ll s = t.second;
			Q.pop();
			if(C[s] < t.first) continue;
			for(int i=0;i<v[s].size();i++){
				P e = v[s][i];
				if(C[e.second] > C[s] + e.first){
					C[e.second] = C[s] + e.first;
					Q.push(make_pair(-C[e.second],e.second));
				}
			}
		}
		for(int i=0;i<V;i++){
			if(C[i] < Inf) cout << C[i] << endl;
			else cout << "INF" << endl;
		}
	}
}
#if 0
所要時間45分程度。ほとんどの部分はテキストを見ながら自力で書いたがうまくいかず，
蟻本(プログラミングコンテストチャレンジブック)(最近友人から譲ってもらった)を見て28行目を追加しAC
「確定しているので無視」ということの意味があまりわかっていなかったらしい。
#endif


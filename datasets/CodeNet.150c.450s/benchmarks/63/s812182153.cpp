#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>
#include <queue>
#include <tuple>
#include <functional>
using namespace std;
#define rep(i, begin, end) for (decltype(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define si(a) scanf("%d", &a)
#define sii(a, b) scanf("%d%d", &a, &b)
#define siii(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define pi(a) printf("%d\n", a)
#define pii(a, b) printf("%d %d\n", a, b)
#define piii(a, b, c) printf("%d %d %d\n", a, b, c)
#define all(a) a.begin(),a.end()
#define mem(a,v) memset(a,v,sizeof(a))
#define cpy(to, from) memcpy(to, from, sizeof(from))
#define P pair<int, int>
#define t3 tuple<int,int,int>
#define ll long long 
#define pb push_back
//use move emplace..
#define eb emplace_back
//tie(a,ignore,c)=mp(1,2,3) 
#define mp make_pair
#define mt make_tuple
#define what_is(x) cerr << #x << " is " << x << endl
#define read freopen("E:\\in.txt", "r", stdin)

#define maxv 100002
#define maxe 500002
vector<P> G[maxv];
int dis[maxv];
int V, E, r, s, t, d, cur, di;
//fst for dis,snd for v
priority_queue<P,vector<P>,greater<P> >Q;
void dijstra(int src){
	mem(dis, 0x3f);
	dis[src] = 0;
	Q.push({ 0, src });
	while (!Q.empty()){
		tie(di, cur) = Q.top(); Q.pop();
		if (dis[cur] < di)continue;
		for (auto& k : G[cur]){
			if (dis[k.first]>k.second+dis[cur]){
				dis[k.first] = k.second + dis[cur];
				Q.push({ dis[k.first], k.first });
			}
		}
	}
}
int main(){
	//read;
	siii(V, E, r);
	rep(i, 0, E){ siii(s, t, d); G[s].pb({ t, d }); }
	dijstra(r);
	rep(i, 0, V)dis[i] != 0x3f3f3f3f ? pi(dis[i]) : puts("INF");
}
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<set>
#include<stack>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 100000
typedef long long ll;
int main(){
	//連結リストを作る
	int n,m;	//user_num, relation
	cin >> n>>m;
	vector<int> G[n];

	int a,b;
	rep(i,m){
	cin >> a>>b;
	G[a].push_back(b);
	G[b].push_back(a);
	}

	//色を塗っていく
	//初期化。全て0
	int color[MAX] = {};
	int id = 1;

	rep(i,n){
	if(!color[i]) {
	
	stack<int> S;
	S.push(i);	
	color[i] = id;

	while(!S.empty()){
	int v = S.top(); S.pop();

	rep(j,G[v].size()){
	int u = G[v][j];
	if(!color[u]){
	color[u] = id;
	S.push(u);
	}
	}
	}
	}
	id++;
	}	
	
	int q,c,d;
	cin >> q;
	rep(i,q){
	cin >> c >> d;

	if (color[c]==color[d]){
	cout << "yes" << endl;
	}
	else
	cout << "no" << endl;
	}
	return 0;
}


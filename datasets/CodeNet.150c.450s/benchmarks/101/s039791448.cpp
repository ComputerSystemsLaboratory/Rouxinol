#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<vector>
#include<stack>
#include<list>

typedef long long ll;

using namespace std;

static const int MAX = 100010;
static const int NIL = -1;

int n;
vector<int> G[MAX];
int color[MAX];
int id;

void dfs(int r , int c){
	stack<int> s;
	s.push(r);
	color[r] = c;
	while (!s.empty()){
		int t = s.top() ; s.pop();
		for(int i = 0 ; i<G[t].size() ; i++){
			int k = G[t][i];
			if(color[k] == NIL){
				color[k] = c;
				s.push(k);
			}
		}
	}
}

void assign(){
	id =1;
	memset(color ,NIL , sizeof(color));
	for(int i = 0 ; i<n ; i++){
		if(color[i] == NIL)
			dfs(i , id++);
	}
}

int main(){
	ios::sync_with_stdio(false);
	int s,t,m,q;
	cin>>n>>m;
	
	for(int i = 0 ; i<m ; i++){
		cin>>s>>t;
		G[s].push_back(t);
		G[t].push_back(s);
	}
	
	assign();
	

	cin>>q;
	for(int i = 0 ; i<q ; i++){
		cin>>s>>t;
		if(color[s] == color[t]){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}	
	return 0;
}
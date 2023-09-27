#include <iostream>
#include <vector>
using namespace std;

const int N = 2e5;
int used[N];
int head[N];
vector<int> fr[N];
int n, m, a, b;

void dfs(int rt, int now){
	used[now] = 1;
	head[now] = rt;
	for(int i=0; i<fr[now].size(); i++){		
		if(used[fr[now][i]] == 0){
			dfs(rt, fr[now][i]);
		}		
	}
}

void Sovle(){
	for(int i=0; i<n; i++){
		if(used[i]==0)dfs(i,i);
	}
}

void Output(){
	cin>>m;
	for(int i=0; i<m; i++){
		cin>>a>>b;
		if(head[a]==head[b])cout<<"yes\n";
		else cout<<"no\n";
	}
}

void Input(){
	cin>>n>>m;
	for(int i=0; i<m; i++){
 		cin>>a>>b;
 		fr[a].push_back(b);
 		fr[b].push_back(a);
 	}	
}

int main(){
	Input();
	Sovle();
	Output();
	return 0;
}

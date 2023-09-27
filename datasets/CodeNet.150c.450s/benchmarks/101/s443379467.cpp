#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#define MAX 100001
using namespace std;
vector<int> v[MAX];
int color[MAX];

void dfs(int x,int value){
	stack<int> s;
	s.push(x);
	color[x] = value;
	while(!s.empty()){
		int u = s.top();
		s.pop();
		for(int i = 0;i < v[u].size();i++){
			int a = v[u][i];
			if(color[a] == -1){
				color[a] = value;
				s.push(a);
			}
		}
	}
}

int main(){
	int n,m,q,x,y,value;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	value = 1;
	for(int i = 0;i < n;i++){
		color[i] = -1;
	}
	for(int i = 0;i < n;i++){
		if(color[i] == -1)dfs(i,value++);
	}

	cin >> q;
	for(int i = 0;i < q;i++){
		cin >> x >> y;
		if(color[x] == color[y])cout << "yes" <<endl;
		else cout << "no" <<endl;
	}
	return 0;
}
#include <iostream>
#include <vector>
#include <stack>

#define inf 1000000007

using namespace std;

vector<vector<int> > connect;
vector<int> visited;
int n;

void dfs(int start,int c){
	stack<int> st;
	st.push(start);
	while(!st.empty()){
		int k = st.top();
		visited[k] = c;
		st.pop();
		for(int i=0;i<connect[k].size();++i){
			int tmp = connect[k][i];
			if(visited[tmp]==-1){
				st.push(tmp);
			}
		}
	}
}

int main(){
	int m,q;
	cin >> n >> m;
	connect.resize(n);
	visited.resize(n);
	for(int i=0;i<m;++i){
		int s,t;
		cin >> s >> t;
		connect[s].push_back(t);
		connect[t].push_back(s);
	}
	int c = 0;
	for(int i=0;i<n;++i)visited[i] = -1;
	for(int i=0;i<n;++i){
		if(visited[i] == -1){
			dfs(i,c);
			c++;
		}
	}
	cin >> q;
	vector<bool> res(q);
	for(int i=0;i<q;++i){
		int from,to;
		cin >> from >> to;
		if(visited[from] == visited[to]){
			res[i] = true;
		}else{
			res[i] = false;
		}
	}
	for(int i=0;i<q;++i){
		if(res[i])cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
}

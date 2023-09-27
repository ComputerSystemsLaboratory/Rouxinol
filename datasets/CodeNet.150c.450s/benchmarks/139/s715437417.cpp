#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
vector<int>graph[100005];
bool visited[100005];
int dist[100005];
int main(){
	int n,m;
	cin>>n>>m;
	while(m--){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	visited[1] = true;
	queue<pi>q;
	q.push(pi(1,0));
	while(q.size()){
		pi temp = q.front();
		int curr = temp.first;
		int d = temp.second;
		q.pop();
		dist[curr] = d;
		for(int i=0; i<graph[curr].size(); i++){
			int next_ = graph[curr][i];
			if(!visited[next_]){
				visited[next_] = true;
				q.push(pi(next_,curr));
			}
		}
	}
	cout<<"Yes"<<'\n';
	for(int i=2; i<=n; i++) cout<<dist[i]<<'\n';
}
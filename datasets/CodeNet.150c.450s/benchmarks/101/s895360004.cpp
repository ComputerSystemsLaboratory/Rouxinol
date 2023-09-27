#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;

void bfs(int s);

int n_user,m,*deg;
vector<int> *G; 

int main(void){
	cin>>n_user>>m;
	deg = new int[n_user];
	G = new vector<int>[n_user];
	for(int i=0;i<n_user;i++)
		deg[i] = -1;

	int user1,user2;
	for(int i=0;i<m;i++){
		cin>>user1>>user2;
		G[user1].push_back(user2);
		G[user2].push_back(user1);
	}

	for(int i=0;i<n_user;i++) bfs(i);

	int question,s,t;
	cin>>question;
	for(int i=0;i<question;i++){
		cin>>s>>t;
		if(deg[s]!=-1){
			if(deg[s]==deg[t])
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
	}

	delete [] G; delete [] deg;
}

void bfs(int s){
	queue<int> q;
	q.push(s);
	if(deg[s]==-1) deg[s] = s;
	else return ;

	int u;
	while(!q.empty()){
		u = q.front();
		q.pop();
		for(int v=0;v<G[u].size();v++){
			if(deg[G[u][v]]==-1){
				deg[G[u][v]] = deg[u];
				q.push(G[u][v]);
			}
		}
	}
}
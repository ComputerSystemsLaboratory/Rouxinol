#include<iostream>
#include<vector>
#include<limits.h>
#include<queue>
#include<string>
using namespace std;

vector< vector<int> > L(105);
vector<int> d(105,-1);
vector<bool> checked(105,0);

void BFS(int s){
	queue<int> Q;
	int i;
	int v;
	
	Q.push(s);
	d[s]=0;
	while(!Q.empty()){
		v=Q.front();
		Q.pop();
		
		for (i=0;i<L[v].size();i++){
			if (d[L[v][i]]==-1){
				Q.push(L[v][i]);
				d[L[v][i]]=d[v]+1;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,i,j;
	cin >> n;
	
	int id, deg, v;
	for (i=0;i<n;i++){
		cin >> id >> deg;
		for (j=0;j<deg;j++){
			cin >> v;
			L[id-1].push_back(v-1);
		}
	}
	
	BFS(0);
	
	for (i=0;i<n;i++){
		cout << i+1 << " " << d[i] << endl;
	}
	return 0;
	
}
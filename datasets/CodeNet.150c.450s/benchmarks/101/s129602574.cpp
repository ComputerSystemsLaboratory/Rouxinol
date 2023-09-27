#include <iostream>
#include <vector>
#include <stack>
#define MAX 100000
using namespace std;
int n,m;
vector<vector<int> > list(MAX);
int grp[MAX];
int group;

void dfs(int now){
	stack<int> next;
	grp[now]=group;	next.push(now);
	while(!next.empty()){
		now=next.top();	next.pop();
		for(int i=0;i<(int)list[now].size();i++){
			if(grp[list[now][i]]==-1){
				grp[list[now][i]]=group;
				next.push(list[now][i]);
			}
		}
	}
}

int main(){
	cin>>n>>m;
	int s,t;
	for(int i=0;i<m;i++){
		cin>>s>>t;
		list[s].push_back(t);
		list[t].push_back(s);
	}
	for(int i=0;i<n;i++)	grp[i]=-1;
	group=1;
	for(int i=0;i<n;i++){
		if(grp[i]==-1){
			dfs(i);
			group++;
		}
	}
	int q;	cin>>q;
	for(int i=0;i<q;i++){
		cin>>s>>t;
		if(grp[s]==grp[t])	cout<<"yes"<<endl;
		else 	cout<<"no"<<endl;
	}
	return 0;
}
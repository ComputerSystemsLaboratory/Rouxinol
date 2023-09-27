#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int nam[100001];
bool vis[100001];
vector<int> a[100001];
queue<int> q;
bool ok=false;
int n,u,k,x,m,qq,s,e,t=1;
void dfs(int k){
	 if (k==e)
	    ok=true;
	 if (ok) return; 
     vis[k]=true;
	 for (int i=0; i<a[k].size(); i++){
	     if (!vis[a[k][i]] && !ok){
	     	dfs(a[k][i]);
		 }
     }
}
int main(){
	memset(a,0,sizeof(a));
	memset(vis,false,sizeof(vis));
	memset(nam,0,sizeof(nam));
	cin>>m>>n;
	for (int i=0; i<n; i++){
		cin>>u>>k;
		a[u].pb(k);
		a[k].pb(u);
	}
	cin>>qq;
	while (qq--){
	       ok=false; 
	       while (!q.empty()) q.pop();
		   cin>>s>>e;
		   if (!vis[s]){
		      q.push(s); 
		      while (!q.empty()){
		   	        x=q.front(); vis[x]=true; q.pop(); 
		   	        nam[x]=t;
				    for (int i=0; i<a[x].size(); i++){
	                    if (!vis[a[x][i]])
	     	               q.push(a[x][i]);
                    }
		      }
		      t++;
		  }
		  if (nam[s]==nam[e])
		      cout<<"yes"<<endl;
		   else 
		      cout<<"no"<<endl;	
	} 
	return 0;
}

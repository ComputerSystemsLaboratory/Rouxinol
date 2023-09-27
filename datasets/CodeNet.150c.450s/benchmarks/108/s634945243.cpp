#include<iostream>
#include<queue>
using namespace std;

static const int INFTY = (1<<29);
int M[100][100];
int d[100];
int n;

void dfs(int s){
    int u;
    queue<int> q;

    q.push(s);
    for(int i=0;i<n;i++) d[i]=INFTY;
    d[s]=0;

    while( !q.empty() ){
	u=q.front(); q.pop();
	for(int v=0;v<n;v++){
	    if(M[u][v]==0) continue;
	    if(d[v]!=INFTY) continue;
	    d[v]=d[u]+1;
	    q.push(v);
	}
    }

    for(int i=0;i<n;i++){
	cout << i+1 << " " << ((d[i]==INFTY) ? (-1):d[i]) << endl;
    }
    
}

int main(void){
    int u,k,v;

    cin >> n;
 
    for(int i=0;i<n;i++){
	cin >> u >> k;
	u--;
	for(int j=0;j<k;j++){
	    cin >> v;
	    v--;	
	    M[u][v]=1;
	}
    }

    dfs(0);

    return 0;
}
#include<iostream>
#include<stack>

using namespace std;
int d[100],f[100];
int M[100][100];
int n,t=0;

void dfs(int s){
    stack<int> S;
    int u;
    bool found=0;
    
    S.push(s);
    d[s]=++t;
    while( !S.empty() ){
	u=S.top();
	found=0;
	for(int v=0;v<n;v++){
	    if(M[u][v]==1 && d[v]==0){
		S.push(v);
		d[v]=++t;
		found=1;
		break;
	    }
	}
	if(found==0){
	    S.pop();
	    f[u]=++t;
	}
    }
}
    
int main(){
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

    for(int i=0;i<n;i++){
	if(d[i]==0) dfs(i);
    }

    for(int i=0;i<n;i++){
	cout << i+1 << " " << d[i] << " " << f[i] << endl;
    }

    return 0;
}
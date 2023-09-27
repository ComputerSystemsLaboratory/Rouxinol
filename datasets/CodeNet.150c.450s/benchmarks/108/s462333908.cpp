#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
#define N 1000
bool M[N][N];

int main(){
    int n,u,k,v;
    queue<int> Q;
 
    cin >> n;
    for(int i=0;i<n;i++){
	cin >> u >> k;
	u--;
	for(int j=0;j<k;j++){
	    cin >> v;
	    v--;
	    M[u][v]=true;
	}
    }
   
    int d[N]={0};
    Q.push(0);
    while(!Q.empty()){
	u=Q.front();
	Q.pop();
	for(int i=1;i<n;i++){
	    if(M[u][i] && d[i]==0){
		d[i]=d[u]+1;
		Q.push(i);
	    }
	}
    }

    for(int i=0;i<n;i++){
	if(i!=0 && d[i]==0) d[i]=-1;
	printf("%d %d\n",i+1,d[i]);
    }

    return 0;
}
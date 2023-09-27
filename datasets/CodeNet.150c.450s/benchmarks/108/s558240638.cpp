#include<bits/stdc++.h>
#define INF 10000000
using namespace std;

int z[100],n,w[100];
int a[100][100];

void bfs(){
  int m;
  z[0]=0;
  queue<int> q;
  q.push(0);
  while(!q.empty()){
    m=q.front();
    q.pop();
    if(w[m]==1) continue;
    w[m]=1;
    for(int i=0;i<n;i++){
      if(a[m][i]==1){
	q.push(i);
	z[i]=min(z[i],z[m]+1);
      }
    }
  }
}


int main(){
  int p,x;
  for(int i=0;i<100;i++){
    z[i]=w[i]=INF;
    for(int j=0;j<100;j++) a[i][j]=0;
  }
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>p>>p;
    for(int j=0;j<p;j++){
      cin>>x;
      a[i][x-1]=1;
    }
  }
  bfs();
  for(int i=0;i<n;i++){
    if(z[i]!=INF) cout<<i+1<<" "<<z[i]<<endl;
    else cout<<i+1<<" "<<-1<<endl;
  }
  return 0;
}


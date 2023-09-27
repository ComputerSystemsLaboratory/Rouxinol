#include<iostream>
#include<queue>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[110][110] = {};
  for(int i=1;i<=n;i++){
    int u,k;
    cin>>u>>k;
    for(int j=0;j<k;j++){
      int v;
      cin>>v;
      a[i][v]=1;
    }
  }

  int d[110];
  for (int i=1;i<=n;i++){
    d[i]=-1;
  }
  queue<int> q;
  d[1]=0;
  q.push(1);
  while(! q.empty()){
    int cur =q.front();
    q.pop();
    for(int i=1;i<=n;i++){
      if(a[cur][i]==1 && d[i]==-1){
	d[i]=d[cur]+1;
	q.push(i);
      }
    }
  }
  for(int i=1;i<=n;i++){
    cout<<i<<" "<<d[i]<<endl;
  }
}
#include<iostream>
#include<queue>
#define INF 1000000
using namespace std;

 queue<int> q;
int a[101][101];
int d[101];
int n;

void bfs(int s){
  int t;
  for(int i=1;i<=n;i++)d[i]=INF;
  d[s]=0;
  while(!q.empty()){
    t=q.front(),q.pop();
    for(int i=1;i<=n;i++){
      if(d[i]!=INF || a[t][i]!=1) continue;
       q.push(i),d[i]=d[t]+1;
    }
  }
}

int main(){
  int top,m,s;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>top>>m;
    for(int j=0;j<m;j++)
      cin>>s,a[top][s]=1;
     } 
  q.push(1);
   bfs(1);
   for(int i=1;i<=n;i++){
     if(d[i]==INF) d[i]=-1;
     cout<<i<<" "<<d[i]<<endl;
   }
    return 0;
}
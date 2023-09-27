#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
  int N,M;
  cin>>N>>M;
  vector<vector<int>> A(N);
  while(M--){
    int a,b;
    cin>>a>>b;
    A[a-1].push_back(b-1);
    A[b-1].push_back(a-1);
  }
  vector<int> B(N,-1);
  queue<int> Q;
  B[0]=0;
  Q.push(0);
  while(!Q.empty()){
    int I=Q.front();
    Q.pop();
    for(int i:A[I])
      if(B[i]==-1){
        B[i]=I;
        Q.push(i);
      }
  }
  puts("Yes");
  for(int i=1;i<N;i++)cout<<B[i]+1<<endl;
}
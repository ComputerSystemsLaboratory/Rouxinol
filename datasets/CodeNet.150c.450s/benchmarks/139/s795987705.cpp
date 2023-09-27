/*

*/

#include<bits/stdc++.h>
using namespace std;
typedef pair<long,long> P;
int main(){
  long N,M;cin>>N>>M;
  vector<vector<long>>A(N);
  for(long i=0;i<M;i++){
    long a,b;cin>>a>>b;
    A[a-1].push_back(b-1);
    A[b-1].push_back(a-1);
  }
  vector<long>D(N,-1);D[0]=0;
  queue<long>q;q.push(0);
  while(q.size()){
    long f=q.front();q.pop();
    for(long x:A[f])if(D[x]==-1){
      D[x]=f;
      q.push(x);
    }
  }
  for(long x:D)if(x==-1){cout<<"No";return 0;}
  cout<<"Yes"<<endl;
  for(long i=1;i<N;i++)cout<<D[i]+1<<endl;
  
  
}
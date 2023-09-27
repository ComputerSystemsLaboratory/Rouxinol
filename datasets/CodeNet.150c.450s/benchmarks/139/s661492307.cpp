#include<bits/stdc++.h>
using namespace std;


int main(){
  
  int N, M, pos, i, j;
  cin>>N>>M;
  vector<vector<int>> P(N);
  vector<int> Num(N, -1), Sb(N);
  queue<int> node;
  
  for(i=0; i<M; i++){
    int a, b; cin>>a>>b;
    P[a-1].push_back(b-1);
    P[b-1].push_back(a-1);
  }
  
  //幅優先探索でやろう。
  
  
  node.push(0); Num[0]=0;
  while(node.size()){
    
    pos=node.front(); node.pop();
    for(j=0; j<(int)P[pos].size(); j++){
      
      if(Num[P[pos][j]]==-1){
        Num[P[pos][j]]=Num[pos]+1;
        node.push(P[pos][j]);
        Sb[P[pos][j]]=pos+1;
      }
    }
  }
  
  cout<<"Yes"<<endl;
  for(i=1; i<N; i++){
    cout<<Sb[i]<<endl;
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std; 
    
int main(){
  int N,M;
  cin >> N >> M;
  vector<vector<int>> G(N);
  for(int i=0;i<M;i++){
    int A,B;
    cin >> A >> B;
    G.at(A-1).push_back(B-1);
    G.at(B-1).push_back(A-1);
  }
  vector<int> seen(N,-1);
  queue<int> q;
  q.push(0);
  while(!q.empty()){
    int A=q.front();
    q.pop();
    for(int i=0;i<G.at(A).size();i++){
      int B=G.at(A).at(i);
      if(seen.at(B)==-1){
        seen.at(B)=A;
        q.push(B);
      }
    }
  }
  cout << "Yes" << endl;
  for(int i=1;i<N;i++){
    cout << seen.at(i)+1 << endl;
  }
}
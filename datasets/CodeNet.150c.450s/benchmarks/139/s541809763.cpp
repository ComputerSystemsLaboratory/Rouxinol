#include<bits/stdc++.h>
using namespace std;

using Graph=vector<vector<int>>;

int main(){
  int N,M;
  cin >> N >> M;
  
  Graph G(N);
  for(int i=0;i<M;i++){
    int A,B;
    cin >> A >> B;
    A--;
    B--;
    G.at(A).push_back(B);
    G.at(B).push_back(A);
  }
  
  vector<int> dist(N,-1);
  vector<int> prev(N,-1);
  queue<int> q;
  q.push(0);
  dist.at(0)=0;
  while(!q.empty()){
    int P=q.front();
    q.pop();
    for(int a:G.at(P)){
      if(dist.at(a)==-1){
        dist.at(a)=dist.at(P)+1;
        prev.at(a)=P;
        q.push(a);
      }
    }
  }
  cout << "Yes" << endl;
  for(int i=1;i<N;i++){
    cout << prev.at(i)+1 << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
  int N,M;
  cin>>N>>M;
  vector<set<int>> A(N);
  for(int i=0;i<M;i++){
    int a,b;
    cin>>a>>b;
    A[a-1].insert(b-1);
    A[b-1].insert(a-1);
  }
  queue<pair<int,int>> B;
  vector<int> C(N,0);
  B.push(make_pair(0,0));
  int a=N;
  while(true){
    pair<int,int> D=B.front();
    B.pop();
    if(C.at(D.first)==0){
      C.at(D.first)=D.second+1;
      a--;
      if(a==0)
        break;
      for(int i:A.at(D.first))
        B.push(make_pair(i,D.first));
    }
  }
  cout<<"Yes"<<endl;
  for(int i=1;i<N;i++)
    cout<<C.at(i)<<endl;
}
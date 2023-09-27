#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K;cin>>N>>K;
  vector<int> A(N);
  for(int i=0;i<N;i++) cin>>A.at(i);
  for(int j=0;j<N-K;j++){
    if(A.at(j)<A.at(j+K)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
}



#include<bits/stdc++.h>
using namespace std;
int main(){
  int N; int K;
  cin>>N>>K;
  vector<long long> S(N);
  for(int i=0; i<N; i++){
    cin>>S.at(i);
  }
for(int i=K; i<N; i++){
  if(S.at(i)>S.at(i-K))
    cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
}
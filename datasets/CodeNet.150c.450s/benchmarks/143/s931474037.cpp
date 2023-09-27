#include<bits/stdc++.h>
using namespace std;
int main(){
 int N; cin>>N;
  long long sum=0;
  vector<int> A(N);
  vector<long long> count(110000,0);
  for(int i=0; i<N; i++){
    cin>>A.at(i);
    sum+=A[i];
    count[A[i]]++;
  }
  int Q; cin>>Q;
  for(int i=0 ;i<Q; i++){
    int B; int C; cin>>B>>C;
    sum+=(C-B)*count[B];
    count[C]+=count[B];
    count[B]=0;
    cout<<sum<<endl;
  }
}
  
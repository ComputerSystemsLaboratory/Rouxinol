#include<iostream>
#include<vector>
using namespace std;

int main() {
  int N,K,i;
  cin>>N>>K;
  vector<int> A(N);
  for (i=0;i<N;i++) cin>>A[i];
  for (i=K;i<N;i++) {
    cout<<((A[i]-1)/A[i-K]>0?"Yes":"No")<<endl;
  }
  return 0;
}
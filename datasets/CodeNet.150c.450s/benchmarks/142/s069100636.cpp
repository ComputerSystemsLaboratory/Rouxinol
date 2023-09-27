#include<bits/stdc++.h>
using namespace std;

void solve() {
	int N, K;
  long long int prod;
  vector<int> A;
  vector<long long int> grades;
  cin>>N>>K;
  for(int i=0; i<N; i++) {
	int x;
  	cin>>x;
	A.push_back(x);
  }
  for(int i=0; i<N-K; i++) {
	if(A[i] < A[i+K]) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
  }
}

int main() {
  solve();
  return 0;
}
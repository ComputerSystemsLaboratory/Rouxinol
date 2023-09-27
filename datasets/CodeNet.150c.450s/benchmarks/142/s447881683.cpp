// C - Marks
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main(){
	int N,K; cin>>N>>K;
	vector<int> A(N);
	vector<double> B(N+1), M(N+1);
	rep(i, N) cin>>A[i];
	rep(i, N) B[i+1] = B[i] + log10(A[i]);
	rep(i, N+1-K) M[i + K] = B[i + K] - B[i];
	for(int i=K+1; i<=N; ++i)
		puts( M[i] - M[i-1] > 1e-10? "Yes":"No");
}

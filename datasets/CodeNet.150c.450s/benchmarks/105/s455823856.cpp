#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

int matrix_rank(vector<unsigned long long> A){
	int n=A.size(),r=0;
	rep(i,64){
		int piv=-1;
		for(int j=r;j<n;j++) if(A[j]>>i&1) {
			piv=j;
			break;
		}
		if(piv==-1) continue;

		for(int j=r;j<n;j++) if(j!=piv && A[j]>>i&1) {
			A[j]^=A[piv];
		}
		swap(A[r],A[piv]);
		r++;
	}
	return r;
}

void solve(){
	int n; cin>>n;
	vector<unsigned long long> a(n);
	rep(i,n) cin>>a[i];
	string s; cin>>s;

	vector<unsigned long long> A;
	int r=0;
	for(int i=n-1;i>=0;i--){
		A.emplace_back(a[i]);
		int r2=matrix_rank(A);
		if(r<r2 && s[i]=='1'){
			puts("1");
			return;
		}
		r=r2;
	}
	puts("0");
}

int main(){
	int q; scanf("%d",&q); rep(_,q) solve();
	return 0;
}

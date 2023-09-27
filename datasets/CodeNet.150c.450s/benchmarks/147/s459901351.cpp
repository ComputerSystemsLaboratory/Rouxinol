#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
int n;
int t[600001];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i=1;i<=100;++i) for (int j=1;j<=100;++j) for (int k=1;k<=100;++k) ++t[(i*i+j*j+k*k+i*j+j*k+k*i)];
	for (int i=1;i<=n;++i) cout << t[i] << "\n";
}
#include <bits/stdc++.h>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int main(){
	int n; cin >>n;
	vector<long long> a(n);
	cinf(n,a);
	ll sum=0;
	ll mi=1000000;
	ll ma=-1000000;
	for(int i=0;i<n;i++){
		sum+=a[i];
		mi=min(mi,a[i]);
		ma=max(ma,a[i]);
	}
	cout << mi << " "<< ma << " "<< sum << endl;
}

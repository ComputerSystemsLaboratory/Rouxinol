#include <bits/stdc++.h>
using namespace std;
const int maxn=100005;

int S[maxn];
int n,q;

int query(int x) {
	int ans=0;
	for (int i=x;i>0;i-=i&-i)
		ans+=S[i];
	return ans;
}

int main() {
	cin>>n>>q;
	for (int i=0;i<q;i++) {
		bool op; cin>>op;
		if (op) {
			int s,t; cin>>s>>t;
			cout<<query(t)-query(s-1)<<'\n';
		}
		else {
			int k,x; cin>>k>>x;
			for (int i=k;i<=n;i+=i&-i)
				S[i]+=x;
		}
	}
}

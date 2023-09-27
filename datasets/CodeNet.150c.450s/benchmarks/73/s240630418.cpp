#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=400005;

ll S[maxn];
int n,q;

void update(int id,int i,int v,int l,int r) {
	if (l==r) S[id]+=v;
	else {
		int m=l+r>>1;
		if (i<=m) update(id<<1,i,v,l,m);
		else update(id<<1|1,i,v,m+1,r);
		S[id]=S[id<<1]+S[id<<1|1];
	}
}

ll query(int id,int ql,int qr,int l,int r) {
	if (ql==l && qr==r) return S[id];
	int m=l+r>>1;
	if (qr<=m) return query(id<<1,ql,qr,l,m);
	else if (ql>m) return query(id<<1|1,ql,qr,m+1,r);
	else return query(id<<1,ql,m,l,m)+query(id<<1|1,m+1,qr,m+1,r);
}

int main() {
	cin>>n>>q;
	for (int i=0;i<q;i++) {
		bool op; cin>>op;
		if (op) {
			int s,t; cin>>s>>t;
			cout<<query(1,s,t,1,n)<<'\n';
		}
		else {
			int i,x; cin>>i>>x;
			update(1,i,x,1,n);
		}
	}
}

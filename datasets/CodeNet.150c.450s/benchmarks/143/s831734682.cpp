#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define rep(i,n) for(int i=0;i<(n);i++)
#define init(a,i) for(int k=0;k<(i);k++)(a)[k]=0
#define in(a,i) for(int k=0;k<(i);k++)cin>>(a)[k]
int main(){
	int n;
	cin>>n;
	int a[n];
	in(a,n);
	int q;
	cin>>q;
	int b[q],c[q];
	rep(i,q)cin>>b[i]>>c[i];
	ll num[100001];
	init(num,100001);
	rep(i,n)num[a[i]]++;
	ll sum=0;
	rep(i,100001)sum+=i*num[i];
	rep(i,q){
		num[c[i]]+=num[b[i]];
		sum+=(c[i]-b[i])*num[b[i]];
		num[b[i]]=0;
		cout<<sum<<"\n";
	}
	return 0;
}
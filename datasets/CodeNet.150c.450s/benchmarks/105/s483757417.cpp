#include<bits/stdc++.h>
typedef long long LL;
using namespace std;

const int N=210;
int n;
LL a[N];
char str[N];
struct Base {
	LL arr[62];
	void init() { memset(arr,0,sizeof(arr)); }
	void ins(LL x) {
		for(int i=61;~i;--i)
			if(x>>i&1) {
				if(!arr[i]) { arr[i] = x; break; }
				else x ^= arr[i];
			}
	}
	bool find(LL x) {
		for(int i=61;~i;--i)
			if(x>>i&1) x ^= arr[i];
		return x == 0;
	}
} A;
int main() {
	int T; scanf("%d",&T);
	while(T--) {
		scanf("%d",&n);
		for(int i=1;i<=n;++i)
			scanf("%lld",&a[i]);
		scanf("%s",str+1);
		A.init();
		bool ans=0;
		for(int i=n;i>=1;--i) {
			if(str[i] == '0') A.ins(a[i]);
			else ans |= !A.find(a[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
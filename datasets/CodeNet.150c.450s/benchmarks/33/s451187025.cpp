#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define RREP(i,N,n) for(int i=N;i>=n;i++)
#define CH(n,a,b) (a)<=(n)&&(n)<(b)
#define p(s) cout<<s<<endl;
typedef long long ll;
using namespace std;

int main() {
	int x, y, s;
	while(cin>>x>>y>>s, x||y||s){
		int ans=0;
		REP(i, 1, s){
			REP(j, 1, s){
				int tax_x=i*(100+x)/100 + j*(100+x)/100;
				if(tax_x == s){
					int val;
					val=i*(100+y)/100 + j*(100+y)/100;
					ans=max(ans, val);
				}
			}
		}

		cout<<ans<<endl;
	}
	return 0;
}
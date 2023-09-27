#include<bits/stdc++.h>
using namespace std;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define range(a) (a).begin(),(a).end()
#define print(A,x,n) rep(i,0,n){cout<<(i ? " ":"")<<A[i]x;}cout<<endl;
#define pprint(A,y,m,n) rep(j,0,m){print(A[j],y,n);}
const long mod=998244353;
const int siz=1e5;
const long inf=1e9;
int main(){
	int T; cin>>T;
	rep(_,0,T){
		int N; cin>>N;
		long A[N]; string s;
		rep(i,0,N) cin>>A[i];
		cin>>s;
		set<long> st;
		bool flag = 0;
		for(int i = N-1; i >= 0; i--){
			while(A[i] > 0){
				long t = 1;
				while(2 * t <= A[i]) t *= 2;
				auto it = st.lower_bound(t);
				if(it != st.end() && *it < 2 * t){
					A[i] ^= *it;
				}else{
					if(s[i] == '0') st.insert(A[i]);
					else{ flag = 1; break; }
				}
			}
		}cout<<flag<<endl;
	}
}
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define vi vector<int>
#define pb push_back
#define INF 999999999
//#define INF (1LL<<59)

int solve(string s){
	set<string> st;
	rep(i,s.size()-1){
		string a[4];
		rep(j,2)a[j] = s.substr(0,i+1);
		rep(j,2)a[2+j] = s.substr(i+1,(int)s.size()-(i+1));
		reverse(all(a[1]));
		reverse(all(a[3]));
		
		rep(j,4){
			rep(k,4){
				if((k<2&&j<2) || (k>=2&&j>=2))continue;
				st.insert(a[k]+a[j]);
			}
		}
	}
	return st.size();
}

int main(){
	int n;
	cin>>n;
	
	rep(i,n){
		string s;
		cin>>s;
		
		cout<<solve(s)<<endl;
		
	}
}
#include<bits/stdc++.h>
using namespace std;
string s,s1,s2;
int t,n,m,tmp,p,pp;
int cnt[10001];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n; m=0; p=10147;
    while (n--){
    	  cin>>t;
    	  cnt[t]++;
    	  if (t>m) m=t;
    	  if (t<p) p=t;
	}
	cout<<p;
	cnt[p]--;
	for (int i=p; i<=m; i++)
	    while (cnt[i]--)
	          cout<<' '<<i;
    cout<<'\n';
	return 0;
} 

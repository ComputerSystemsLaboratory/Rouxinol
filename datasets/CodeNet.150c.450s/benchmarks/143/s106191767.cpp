#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin>>n;
    vector<int> cnt(1e5);
    vector<int> a(n);
    ll sum=0;
    for (auto &x: a){
    	cin>>x;
    	cnt[x]++;
    	sum+=x;
    }
    cin>>q;
    //count number of b's
	while (q--){
		int b,c;
		cin>>b>>c;
		ll change = cnt[b]*(c-b);
		sum+=change;
		cout<<sum<<endl;
		cnt[c]+=cnt[b];
		cnt[b]=0;
	}
    return 0;
}
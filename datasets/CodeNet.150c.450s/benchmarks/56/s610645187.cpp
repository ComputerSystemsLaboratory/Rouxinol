#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

ll sum;
int n;
vector<ll>v;

int main() {
	cin>>n;
	for (int i=0;i<n;i++) {
		ll t; cin>>t;
		sum+=t; v.pb(t);
	}
	sort(v.begin(),v.end());
	cout<<v.front()<<' '<<v.back()<<' '<<sum<<'\n';
}

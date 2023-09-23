#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll x , y , s;
ll a,b;
bool solve(){
	cin >> x >> y >> s;
	if(x + y + s == 0)return false;
	ll ans = 0;
	for(a=1;a<s;a++){
		for(b=1;b<s;b++){
			ll na,nb,ma,mb;
			na = (100 + x)  * a / 100;
			nb = (100 + x) * b / 100;
			ma = (100 + y ) * a / 100;
			mb = (100 + y) * b / 100;
			if(na + nb == s)ans = max(ans,ma+mb);
		}
		
	}
	cout << ans << endl;
	return true;
}
int main(){
	while(solve()){}
	return 0;
}

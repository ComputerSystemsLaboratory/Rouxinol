#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define pi 3.14159265359
#define shosu(X) fixed << setprecision(X)
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

ll int makemin(ll int in){
	ll int rst = 0;
	int keta = log10(in)+1;
	vi tmp;
	ll int in2 = in;
	while(in2>0){
		tmp.pb(in2%10);
		in2/=10;
	}
	sort(All(tmp));
	REP(i,tmp.size()){
		rst+=tmp[i];
		if(i!=tmp.size()-1) rst*=10;
	}
	return rst;
}

ll int makemax(ll int in){
	ll int rst = 0;
	int keta = log10(in)+1;
	vi tmp;
	ll int in2 = in;
	while(in2>0){
		tmp.pb(in2%10);
		in2/=10;
	}
	sort(All(tmp),greater<int>());
	REP(i,tmp.size()){
		rst+=tmp[i];
		if(i!=tmp.size()-1) rst*=10;
	}
	return rst;
}

int main(){
	while(1){
		ll int in,keta;
		cin >> in >> keta;
		if(in==0&&keta==0) break;
		vector<ll int> data;
		data.pb(in);
		ll int cnt = 0;
		ll int ans,ans2;
		while(1){
			ll in2 = in;
			REP(i,keta-(int)(log10(in2))-1) in*=10;
			ll int tmp = makemax(in)-makemin(in);
			REP(i,data.size()){
				if(data[i]==tmp) {
					ans = i;
					ans2 = tmp;
					goto end;
				}
			}
			//cout << in << " ";
			in = tmp;
			cnt++;
			data.pb(tmp);

		}
		end:
		cout << ans << " " << ans2 << " " << cnt-ans+1 << endl;
	}
}
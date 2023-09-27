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
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

#define ANSS 200*333+195*666+1
int main(){
	int n;
	cin >> n;
	REP(i,n){
		int y,m,d;
		ll int ans = 0;
		cin >> y >> m >> d;
		y--;
		int t = y/3;
		ans += 200*t;
		ans += 195*(y-t);
		y++;
		if(y%3==0){
			m--;
			ans+= (m*20);
			ans+= d;
		}else{
			m--;
			ans+= ((m/2)*19+(m-m/2)*20);
			ans += d;
		}
		//cout << ANSS << endl;
		//cout << ans << endl;
		cout << ANSS - ans << endl;
	}
}
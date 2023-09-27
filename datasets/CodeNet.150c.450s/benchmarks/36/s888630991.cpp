#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;
 
int main(){

	int d;
	while(cin >> d){
		ll ans = 0;
		for(int i = 0; i < 600; i+= d){
			ans += (i * i * d);
		}
		cout << ans << endl;
	}
	
	return 0;
}
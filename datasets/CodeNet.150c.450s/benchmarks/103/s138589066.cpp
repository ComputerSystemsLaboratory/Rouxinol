#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;

#define EPS 1e-8

int main(){
	
	int n, s;
	
	while(cin >> n >> s, n){
		int ans = 0;
		rep(i, 1<<10){
			int tmp = i;
			int j = 0;
			int cnt = 0;
			int sum = 0;
			while(tmp != 0){
				
				if(tmp % 2 != 0){
					sum += j;
					cnt++;
				}
				tmp = tmp >> 1;
				j++;
			}
			if(cnt != n) continue;
			if(sum == s) ans++;
		}
		cout << ans << endl;
	}

	
	return 0;
}
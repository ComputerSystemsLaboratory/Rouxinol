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
	
	map<int, int> mp;
	
	int a, maxi = 0;
	while(cin >> a){
		mp[a]++;
		maxi = max(maxi, mp[a]);
	}
	for(auto it : mp){
		if(maxi == it.second) cout << it.first << endl;
	}

	
	return 0;
}
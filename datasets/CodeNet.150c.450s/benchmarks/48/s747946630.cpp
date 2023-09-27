#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
 
typedef long long ll;
typedef pair<int, int> ii;

#define MAXI 1000000

int main() {

	vector<int> bin, tri;
	
	for(int i = 0; i*i <= MAXI; i++){
		bin.push_back(i*i);
	}
	for(int i = 0; i*i*i <= MAXI; i++){
		tri.push_back(i*i*i);
	}
	
	int e;
	while(cin >> e, e){
		int ans = IINF;
		for(int i = 0; tri[i] <= e; i++){
			int ee = e;
			int sum = 0;
			sum += i;
			ee -= tri[i];
			if(DEBUG) cout << "\t" << sum << endl;
			auto it2 = upper_bound(bin.begin(), bin.end(), ee);
			it2--;
			int tmp = distance(bin.begin(), it2);
			sum += tmp;
			if(DEBUG) cout << "\t" << sum << endl;
			ee -= *it2;
			sum += ee;
			ans = min(ans, sum);
		}
		cout << ans << endl;
	}
	

	return 0;
}
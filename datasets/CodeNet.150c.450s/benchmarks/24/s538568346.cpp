#include <iostream>
#include <vector>
#include <algorithm>

#define REP(i,n) for(int i=0; i<n; i++)

using namespace std;

typedef pair<int, int> P;

bool g(const P& a, const P& b){
	return a.second>b.second;
}

int main(){
	while(1){
		int n, m, d, p;
		long long int ans;
		vector<P> danger;
		cin >> n >> m;
		if (n==0 && m==0) return 0;
		ans = 0;
		REP(i,n){
			cin >> d >> p;
			danger.push_back(make_pair(d,p));
		}
		sort(danger.begin(), danger.end(), g);
		
		REP(i,n){
			d = danger[i].first;
			if (m-d>=0)	danger[i].first = 0;
			else danger[i].first -= m;
			m -= d;
			if (m<=0) break;
		}
		REP(i,n){
			d = danger[i].first;
			p = danger[i].second;
			ans += d*p;
		}
		cout << ans << endl;
	}
	return 0;
}


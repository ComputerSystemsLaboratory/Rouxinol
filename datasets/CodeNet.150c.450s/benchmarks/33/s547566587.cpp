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

int main() {

	int x, y, s;
	while(cin >> x >> y >> s, x, y, s){
		int ans = 0;
		REP(i, 1, s){
			int tmp1 = i;
			int tmp11 = i * (100 + x) / 100;
			if(tmp11 >= s) continue;
			int tmp2 = (s - tmp11 + 1) * 100 / (100 + x);
			if(((s - tmp11 + 1) * 100) % (100 + x) == 0) tmp2--;
			if(tmp2 <= 0) continue; 
			//cout << tmp1 << "\t" << tmp2 << "\t" << tmp1 * (100 + y) / 100 + tmp2 * (100 + y) / 100 << endl;
			if(tmp2 * (100 + x) / 100 + tmp11 != s) continue;
			ans = max(ans, tmp1 * (100 + y) / 100 + tmp2 * (100 + y) / 100);
		}
		cout << ans << endl;
	}

	return 0;
}
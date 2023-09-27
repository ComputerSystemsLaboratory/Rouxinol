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

int small[] = {0, 20, 19, 20, 19, 20, 19, 20, 19, 20, 19};
int bigy = 20 * 10;
int smally = (19 + 20) * 5;

int main() {
	
	vector<ll> cnt(600000);
	
	REP(i, 2, 1001){
		REP(j, 0, i-1){
			cnt[(i * (i+1) / 2) - (j * (j+1) / 2)]++;
		}
	}
	
	int n;
	while(cin >> n, n){
		cout << cnt[n] << endl;
	}

	return 0;
}
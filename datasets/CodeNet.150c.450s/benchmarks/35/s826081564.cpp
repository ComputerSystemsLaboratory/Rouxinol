#include <iostream>
#include <vector>
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

// ?¨±?????????????????
#define EPS (1e-10)

int main(){
	int n;
	while(cin >> n && n != 0){
        vector<int> a(n);
        REP(i, n) cin >> a[i];
        vector<int> sum(n);
        sum[0] = a[0];
        FOR(i, 1, n) sum[i] = sum[i-1] + a[i];
        int ret = sum[0];
        FOR(i,-1, n) FOR(j,i+1, n) ret = i > -1 ? max(ret ,sum[j]-sum[i]) : max(ret ,sum[j]) ; 
        cout << ret << endl;
    }
    return 0;
}
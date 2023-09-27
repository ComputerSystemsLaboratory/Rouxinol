#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define INF INT_MAX/3
#define ALL(a) (a).begin(),(a).end()
#define CLR(a) memset(a,0,sizeof(a))

typedef long long int ll;

using namespace std;

int main(){
    vector<int> primes;
    primes.PB(2);
    FOR(i,3,1000000){
	bool flg = true;
	for(int j=0;primes[j]*primes[j]<=i;j++){
	    if(i % primes[j] == 0 ) {
	    flg = false;
	    break;
	    }
	}
	if(flg) primes.PB(i);
	i++;
    }

    int n;
    while(true){
	cin >> n;
	if(cin.eof())break;
	int res = upper_bound(ALL(primes),n) - primes.begin();
	cout << res << endl;
    }

    return 0;
}
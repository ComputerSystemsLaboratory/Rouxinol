#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define INF (1<<29)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define CLR(a) memset(a,0,sizeof(a))
const int dx[] = {-1,0,0,1},dy[] = {0,1,-1,0};

typedef long long int ll;

using namespace std;

int main(){
    bool primes[1000002] = {true};
    memset(primes,true,sizeof(primes));
    primes[1] = false;
    FOR(i,2,1e6+1){
	for(int j=2;j*j<=i;j++){
	    if(i % j == 0){
		primes[i] = false;
		break;
	    }
	}
    }
    while(true){
	int a,d,n;
	cin >> a >> d >> n;
	if(a == 0 && d == 0 && n == 0) break;
	int count = 0;
	while(count < n){
	    if(primes[a]){
	       	count++;
		if(count == n) cout << a << endl;
	    }
	    a += d;
	}
    }
    return 0;
}
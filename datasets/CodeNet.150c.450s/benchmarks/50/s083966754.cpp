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
    while(true){
	int ans = 0;
	int m;
	cin >> m;
	if(m == 0) break;
	m = 1000 - m;
	ans += m / 500;
	m %= 500;
	ans += m / 100;
	m %= 100;
	ans += m / 50;
	m %= 50;
	ans += m / 10;
	m %= 10;
	ans += m / 5;
	m %= 5;
	ans += m;
	cout << ans << endl;
    }
    return 0;
}
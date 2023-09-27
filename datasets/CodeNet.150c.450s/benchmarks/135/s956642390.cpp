#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define MP make_pair
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a,c) memset(a,c,sizeof(a))

#define DEBUG(x) cout<<"#x"<<": "<<x<<endl

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const ll INF = INT_MAX/3;
const ll MOD = 1000000007;
const double EPS = 1e-14;
const int dx[] = {1,0,-1,0} , dy[] = {0,1,0,-1};

int widths[1500*1500];
int len = 0;

int vecCount(int key){
    int ret = 0;
    int h = lower_bound(widths,widths+len,key) - widths;
    int t = upper_bound(widths,widths+len,key) - widths;
    if(widths[h] != key) ret = 0;
    else ret = t - h;
    return ret;
}

int main(){

    while(true){
	int n,m;
	int ans = 0;
	cin >> n >> m;
	if(n==0 && m == 0) break;
	vi h(n),w(m);
	int index = 0;
	REP(i,n) scanf("%d",&h[i]);
	REP(i,m) scanf("%d",&w[i]);
	REP(i,m){
	    widths[index] = w[i];
	    index++;
	    int sum = w[i];
	    FOR(j,i+1,m){
		sum += w[j];
		widths[index] = sum;
		index++;
	    }
	}
	len = index;
	sort(widths,widths+len);

	REP(i,n){
	    int sum = h[i];
	    ans += vecCount(sum);
	    FOR(j,i+1,n){
		sum += h[j];
		ans += vecCount(sum);
	    }
	}
	cout << ans << endl;
    }

    return 0;
}
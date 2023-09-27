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
	int n;
	map<char,char> dic;
	cin >> n;
	if(n==0) break;
	REP(i,n){
	    char a,b;
	    cin >> a >> b;
	    dic[a] = b;
	}
	cin >> n;
	string ans = "";
	REP(i,n){
	    char a;
	    cin >> a;
	    if(dic.find(a) != dic.end()){
		ans += dic[a];
	    }else ans += a;
	}
	cout << ans << endl;
    }
    return 0;
}
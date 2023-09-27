#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
	while(1){
		int t,h;
		cin >> t >> h;
		if(t==0&&h==0) break;
		vector<int> td;
		vector<int> hd;
		int tsum = 0;
		int hsum = 0;
		REP(i,t){
			int tmp;
			cin >> tmp;
			td.pb(tmp);
			tsum += tmp;
		}
		REP(i,h){
			int tmp;
			cin >> tmp;
			hd.pb(tmp);
			hsum += tmp;
		}
		int ansx = 114514;
		int ansy = 114514;
		REP(i,t){
			REP(j,h){
				if(tsum-td[i]+hd[j]==hsum-hd[j]+td[i]){
					if((ansx+ansy)>(i+j)){
						ansx = i;
						ansy = j;
						i = t;
						j = h;
					}
				}
			}
		}
		if(ansx == 114514) cout << -1 << endl;
		else cout << td[ansx] << " " << hd[ansy] << endl;

	}
}
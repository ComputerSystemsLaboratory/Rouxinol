#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VII;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	int n, r;
	VI ps, cs, cards, temp;
	while(1){
		ps.clear();
		cs.clear();
		cards.clear();
		cin >> n >> r;
		if(n == 0 && r == 0) break;
		rep(i, n){
			cards.pb(i + 1);
		}
		reverse(all(cards));
		rep(i, r){
			int p, c;
			cin >> p >> c;
			ps.pb(p);
			cs.pb(c);
		}
		rep(i, r){
			temp.clear();
			REP(j, ps[i] - 1, ps[i] + cs[i] - 1){
				temp.pb(cards[j]);
			}
			rep(j, ps[i] - 1){
				temp.pb(cards[j]);
			}
			REP(j, ps[i] + cs[i] - 1, cards.size()){
				temp.pb(cards[j]);
			}
			cards.clear();
			cards = temp;
		}
		cout << cards[0] << endl;
	}
	return 0;
}
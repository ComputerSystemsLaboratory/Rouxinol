#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, s, n) for(int i = s; i < n; ++i)
#define rep(i, n)		 REP(i, 0, n)
#define SORT(c)			 sort((c).begin(), (c).end())
#define IINF	INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
 
typedef long long				ll;
typedef pair <int, int> ii;
 
/*
struct point{
	ll x;
	ll y;
	point(){x = 0;y = 0;}
	point(ll x, ll y):x(x), y(y){}
};
*/

int main() {
	
	int a, l;
	while(cin >> a >> l, a, l){
		vector<int> as;
		
		rep(loop, 50){
			bool endflag = false;
			rep(i, as.size()){
				if(as[i] == a){
					cout << i << " " << a << " " << loop - i << endl;
					endflag = true;
					break;
				}
			}
			if(endflag) break;
			as.push_back(a);
			vector<int> tmp(l);
			int i = 0;
			while(a != 0){
				tmp[i] = a % 10;
				a /= 10;
				i++;
			}
			
			SORT(tmp);
			
			//rep(i, tmp.size()) cout << tmp[i] << "\t";
			//cout << endl;
			int maxi = 0, mini = 0;
			int dex = 1;
			rep(i, l){
				mini += (dex * tmp[l-1-i]);
				maxi += (dex * tmp[i]);
				dex *= 10;
			}
			//cout << maxi << endl << mini << endl;
			a = maxi - mini;
		}
	}
	
	return 0;
}
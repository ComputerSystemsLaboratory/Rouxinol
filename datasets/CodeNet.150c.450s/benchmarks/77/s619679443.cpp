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

struct NODE{
	int x, y;
	NODE(){x = y =0;}
	NODE(int x, int y):x(x), y(y){
	}
};
	

int main() {
	int n;
	while(cin >> n, n){
		vector<NODE> vec(n);
		vector<bool> ok(n);
		rep(i, n){
			int xx, yy;
			cin >> xx >> yy;
			vec[i] = NODE(xx, yy);
		}
		
		int m;
		cin >> m;
		int x = 10, y = 10;
		rep(i, m){
			string way;
			int dis;
			cin >> way >> dis;
			rep(j, dis){
				if(way == "N") y++;
				else if(way == "E") x++;
				else if(way == "W") x--;
				else y--;
				if(DEBUG) cout << x << "\t" << y << endl;
				rep(k, n) if(x == vec[k].x && y == vec[k].y) ok[k] = true;
			}
		}
	
		bool flag = true;
		rep(i, n) flag = (flag & ok[i]);
		
		if(flag) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
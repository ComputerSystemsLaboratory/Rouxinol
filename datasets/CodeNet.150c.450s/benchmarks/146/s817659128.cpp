#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;

#define EPS 1e-10

int main(){

	int n;
	cin >> n;
	while(n--){
		double x1, x2,x3,x4,y1,y2,y3,y4;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		double cross = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
		if(fabs(cross) < EPS) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}
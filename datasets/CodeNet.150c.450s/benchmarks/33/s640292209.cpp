
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1192&lang=jp

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

int calc(int p, int x){
	return p*(100+x)/100;
}

int main()
{
	int X,Y,S;

	while(cin >> X >> Y >> S && X)
	{
		int ans=0;
		REP( y, 1, S ){
			REP( x, 1, S ){	
				if(calc(x,X)+calc(y,X) == S){
					int x2 = calc(x,Y);
					int y2 = calc(y,Y);
					ans = max(x2+y2,ans);
				}
			}
		}
			
		cout << ans << endl;

	}
	return 0;
}
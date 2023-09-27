
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2019

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

struct Route {
	int d;
	int p;
	bool operator<( const Route& right ) const {
			return p > right.p;
	}
};

int main()
{
	int N,M;

	while(cin >> N >> M)
	{
		if(N == 0 && M == 0){ break; }
		vector<Route> routes(N);
		int D,P;
		rep(i,N){
			cin >> D >> P;
			routes[i] = {D,P};
		}
		
		sort(ALL(routes));

		rep(i,N)
		{
			if(routes[i].d == 0){
				//Do Nothing...
			}
			else
			{
				if(routes[i].d <= M)
				{
					M -= routes[i].d;
					routes[i].d = 0;
				}
				else
				{
					routes[i].d -= M;
					M = 0;
					break;
				}
			}
		}

		int total=0;
		rep(i,N){
			total += routes[i].d * routes[i].p;
		}

		cout << total << endl;
	}
	return 0;
}
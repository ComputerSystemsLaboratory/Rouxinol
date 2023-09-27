
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2015

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

const int MAX = 1500001;

int main()
{
	int N,M;
	while(cin >> N >> M && N)
	{
		vector<int> h(N);
		vector<int> w(M);
		
		rep(i,N){
			cin >> h[i];
		}

		rep(i,M){
			cin >> w[i];
		}

		vector<int> vertical(MAX,0);
		rep(i,h.size())
		{
			int tmp=0;
			REP(j,i,h.size())
			{
				tmp += h[j];
				vertical[tmp]++;
			}
		}

		vector<int> horizontal(MAX,0);
		rep(i,w.size())
		{
			int tmp=0;
			REP(j,i,w.size())
			{
				tmp += w[j];
				horizontal[tmp]++;
			}
		}

		int ans=0;
		rep(i,MAX){
			ans += vertical[i] * horizontal[i];
		}

		cout << ans << endl;
	}
	return 0;
}
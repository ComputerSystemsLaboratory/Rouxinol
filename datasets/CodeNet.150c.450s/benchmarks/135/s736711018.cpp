#include<iostream>
#include <list>
#include<stack>
#include<queue>
#include <vector>
#include <set>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<string>
#include <functional>
#include<fstream>
#include<map>

#define FOR(k,m,n) for(int (k)=(m);(k)<(n);(k)++)
#define REP(i,n) FOR((i),0,(n))
#define LL long long
#define CLR(a) memset((a),0,sizeof(a))
#define SZ(x) (int((x).size()))
#define WAITING(str) int str;std::cin>>str;
#define DEBUGING(str) cout<<str<<endl
using namespace std;

const LL MOD = 1000000007;// 10^9+7
const int INF = (1 << 30);



//計算
void calc(vector<LL> vh, vector<LL> vw)
{
	map<LL, LL> mh, mw;

	REP(i, vh.size() - 1)vh[i + 1] += vh[i];
	REP(i, vw.size() - 1)vw[i + 1] += vw[i];

	REP(i, vh.size())FOR(j, i + 1, vh.size()) {
		LL len = vh[j] - vh[i];
		if (mh.find(len) == mh.end())mh[len] = 1;
		else mh[len]++;
	}
	REP(i, vw.size())FOR(j, i + 1, vw.size()) {
		LL len = vw[j] - vw[i];
		if (mw.find(len) == mw.end())mw[len] = 1;
		else mw[len]++;
	}


	LL res = 0;
	for (auto itr = mh.begin(); itr != mh.end(); ++itr) {
		LL len = itr->first;
		LL cnt = itr->second;

		auto wItr = mw.find(len);
		if (wItr != mw.end()) {
			res += cnt * wItr->second;
		}
	}
	//cerr << "=======";
	cout << res << endl;
}


//デバッグ
void debug()
{
	int N;
	cin>>N;
}


//メイン関数
int main()
{
	while (true) {
		int N, M;
		vector<LL> h, w;
		cin >> N >> M;
		if (N == 0)break;

		h.resize(N + 1); REP(i, N)cin >> h[i + 1];
		w.resize(M + 1); REP(i, M)cin >> w[i + 1];

		calc(h, w);
	}

	//debug();
	
	return 0;
}


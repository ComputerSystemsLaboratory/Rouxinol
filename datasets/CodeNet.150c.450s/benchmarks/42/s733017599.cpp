#include<bits/stdc++.h>
using namespace std;
using lint = long long;
template<typename T = lint>inline T in() { T x; cin >> x; return x; }
#define INF           1e16
#define REP(i,n)      for(lint i=0,i##_len=(n);i<i##_len;++i)
#define REP1(i,n)     for(lint i=1,i##_len=(n);i<=i##_len;++i)
#define REPR(i,n)     for(lint i=n-1;i>=0;--i)
#define REPR1(i,n)    for(lint i=n;i>0;--i)
#define REPI(i,ini,n) for(lint i=(ini),i##_len=(n);i<i##_len;++i)
#define REPC(i,obj)   for(auto i:obj)
#define R_UP(a,b)     (((a)+(b)-1)/(b))
#define ALL(obj)      (obj).begin(),(obj).end()
signed main()
{
	int n = in(), q = in();
	queue<pair<string, int>>que;
	REP(i, n)
	{
		string name = in<string>();
		int time = in();
		que.push(make_pair(name, time));
	}
	for (int time_sum = 0; que.size() > 0;)
	{
		auto top = que.front(); que.pop();
		if (top.second <= q)
		{
			cout << top.first << ' ' << time_sum + top.second << endl;
			time_sum += top.second;
		}
		else
		{
			que.push(make_pair(top.first, top.second - q));
			time_sum += q;
		}
	}
}

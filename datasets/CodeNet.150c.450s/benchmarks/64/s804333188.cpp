#include<bits/stdc++.h>
#define INF            1e9
#define REP(i,n)       for(lint i=0,i##_len=(n);i<i##_len;++i)
#define REP1(i,n)      for(lint i=1,i##_len=(n);i<=i##_len;++i)
#define REPI(i,ini,n)  for(lint i=(ini),i##_len=(n);i<i##_len;++i)
#define REPR(i,n)      for(lint i=(n)-1;i>=0;--i)
#define REPR1(i,n)     for(lint i=(n);i>0;--i)
#define REPRI(i,ini,n) for(lint i=(ini)-1,i##_len=(n);i>=i##_len;--i)
#define REPC(i,obj)    for(auto i:obj)
#define R_UP(a,b)      (((a)+(b)-1)/(b))
#define ALL(obj)       (obj).begin(),(obj).end()
using namespace std;
using lint = long long;
template<typename T = lint>inline T in() { T x; cin >> x; return x; }
void subset_sum(const vector<int>::iterator&first, const vector<int>::iterator&last, map<int, int>&result, int sum = 0)
{
	if (first == last)
	{
		result[sum]++;
		return;
	}
	subset_sum(first + 1, last, result, sum);
	subset_sum(first + 1, last, result, sum + *first);
}
signed main()
{
	int n = in();
	vector<int>a(n);
	REPC(&i, a)i = in();
	map<int, int>subsum;
	subset_sum(ALL(a), subsum);
	int q = in();
	REP(i, q)
	{
		int m = in();
		cout << (subsum[m] != 0 ? "yes" : "no") << endl;
	}
}

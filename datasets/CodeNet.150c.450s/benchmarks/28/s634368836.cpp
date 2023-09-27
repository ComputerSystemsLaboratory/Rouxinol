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
int binary_search_p(int first_w, int last_w, int k, int max_w, const vector<int>&w)
{
	auto get_minimum_k = [&w](int p_candidate)
	{
		int result = 1;
		int temp = 0;
		REPC(i, w)
		{
			if (temp + i <= p_candidate)temp += i;
			else
			{
				result++;
				temp = i;
			}
		}
		return result;
	};
	int p_candidate = first_w + (last_w - first_w) / 2;
	int min_k = get_minimum_k(p_candidate);
	if (first_w > last_w)
	{
		int result;
		for (int i = max(p_candidate, max_w);; i++)
		{
			int minimum_k = get_minimum_k(i);
			if (minimum_k <= k)return i;
		}
	}
	return min_k <= k ? binary_search_p(first_w, p_candidate - 1, k, max_w, w) : binary_search_p(p_candidate + 1, last_w, k, max_w, w);
}
signed main()
{
	int n = in(), k = in();
	vector<int>w(n);
	int min_w = 10001, max_w = -1, sum_w = 0;
	REPC(&i, w)
	{
		i = in();
		if (min_w > i)min_w = i;
		if (max_w < i)max_w = i;
		sum_w += i;
	}
	cout << binary_search_p(min_w, sum_w, k, max_w, w) << endl;
}

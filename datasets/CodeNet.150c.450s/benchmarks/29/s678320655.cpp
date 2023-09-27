#define _CRT_SECURE_NO_WARNINGS
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
	int n; scanf("%d", &n);
	list<int>l;
	REP(i, n)
	{
		char cmd[12]; scanf("%s", cmd);
		if (!strcmp(cmd, "insert"))
		{
			int num; scanf("%d", &num);
			l.push_front(num);
		}
		else if (!strcmp(cmd, "delete"))
		{
			int num; scanf("%d", &num);
			auto itr = find_if(l.begin(), l.end(), [num](int n) {return n == num; });
			if (itr != l.end())l.erase(itr);
		}
		else if (!strcmp(cmd, "deleteFirst"))l.pop_front();
		else l.pop_back();
	}
	REP(i, l.size())
	{
		static auto itr = l.begin();
		if (i != 0)printf(" ");
		printf("%d", *itr++);
	}
	printf("\n");
}

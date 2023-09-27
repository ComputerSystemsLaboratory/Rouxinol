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
signed main()
{
	int n = in();
	map<string, bool>dic;
	REP(i, n)
	{
		string cmd = in<string>();
		if (cmd == "insert")
		{
			string str = in<string>();
			dic[str] = true;
		}
		else if (cmd == "find")
		{
			string str = in<string>();
			cout << (dic[str] ? "yes" : "no") << endl;
		}
	}
}

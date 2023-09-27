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
	string str; getline(cin, str);
	stringstream ss(str);
	stack<int>s;
	while (true)
	{
		ss >> str;
		if (!ss)break;
		try
		{
			s.push(stoi(str));
		}
		catch (std::invalid_argument)
		{
			int arg1 = s.top(); s.pop();
			int arg2 = s.top(); s.pop();
			switch (str.front())
			{
			case '+':
				s.push(arg2 + arg1);
				break;
			case '-':
				s.push(arg2 - arg1);
				break;
			case '*':
				s.push(arg2 * arg1);
				break;
			}
		}
	}
	cout << s.top() << endl;
}

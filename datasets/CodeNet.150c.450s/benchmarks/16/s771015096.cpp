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
	string str = in<string>();
	vector<int>pond;
	int pond_sum = 0, pond_temp = 0, pond_end = -1;
	REP(i, str.size())
	{
		if (i == pond_end)
		{
			pond.push_back(pond_temp);
			pond_sum += pond_temp;
			pond_temp = 0;
			pond_end = -1;
		}
		else if (str[i] == '\\')
		{
			int cnt = 0;
			REPI(j, i + 1, str.size())
			{
				if (str[j] == '/')
				{
					if (cnt-- == 0)
					{
						if (pond_end == -1)pond_end = j;
						pond_temp += j - i;
						break;
					}
				}
				else if (str[j] == '\\') cnt++;
			}
		}
	}
	cout << pond_sum << endl;
	cout << pond.size();
	REPC(i, pond) cout << ' ' << i;
	cout << endl;
}

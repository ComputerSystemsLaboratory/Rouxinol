
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2582

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

int main()
{
	int N;
	string f1,f2;
	int ans;
	while(cin >> N && N)
	{
		ans=0;
		f1 = f2 = "";
		rep(nth, N)
		{
			cin >> f1 ;

			if((f1=="lu" && f2=="ru") || (f1=="ru" && f2=="lu")){
				ans++;
			}
			else if((f1=="ld" && f2=="rd") ||(f1=="rd" && f2=="ld")){
				ans++;
			}
			f2 = f1;	
		}
		cout << ans << endl;
	}

	return 0;
}
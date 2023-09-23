
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1179&lang=jp

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
	// 普通:195	 3:200 大:20(1) 小:19(2)			
	int N;
	cin >> N;

	rep(i,N)
	{
		int Y,M,D;
		int day[3] = {200, 195, 195};
		cin >> Y >> M >> D;

		int ans=1;//誕生日を含めるため

		//日の計算
		if(Y%3==0)
		{
			ans += 20-D;
		}else
		{
			if(M%2==0){
				ans += 19-D;
			}else{
				ans += 20-D;
			}

		}


		//月の計算
		REP(m, M+1, 11)
		{
			if(Y%3==0)
			{
				ans+=20;
			}else
			{
				if(m%2==0){
					ans+=19;
				}else{
					ans+=20;
				}
			}
		}

		//年の計算
		REP(y, Y+1, 1000){
			ans+=day[y%3];
		}

		cout << ans << endl;
	}
	return 0;
}
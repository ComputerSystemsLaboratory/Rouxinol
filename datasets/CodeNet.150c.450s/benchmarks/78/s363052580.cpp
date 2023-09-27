
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1167

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

const int MAX = 1000100;

vector<int> list;
vector<int> odd;

void init()
{
	for(int i=1;;i++)
	{
		int num = i*(i+1)*(i+2)/6;
		if(num > MAX){ break; }
		list.push_back(num);
		if(num % 2){ odd.push_back(num); }
	}

	return;
}

int main()
{
	init();
	
	vector<int> dp(MAX,MAX);
	vector<int> odd_dp(MAX,MAX);
	
	dp[0] = 0;
	odd_dp[0] = 0;

	rep(i,list.size()){
		REP(j,list[i],MAX){
			dp[j] = min(dp[j], dp[j - list[i]] + 1);	
		}
	}

	rep(i,odd.size()){
		REP(j,odd[i],MAX){
			odd_dp[j] = min(odd_dp[j], odd_dp[j - odd[i]] + 1);	
		}
	}
	
	int N;
	while(cin >> N && N){
		cout << dp[N] << " " << odd_dp[N] << endl;	
	}

	return 0;
}
#include<iostream>
#include<map>
#include<vector>
#include<list>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<climits>
#include<ctime>
#include<cstring>
#define REP(i,p,n) for(int i=p;i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep_split(tok,a_str,re) for(char *tok = strtok((char *)a_str.c_str(),re); tok != NULL; tok = strtok(NULL,re))
#define all(c) (c).begin(), (c).end()

using namespace std;

int main() {
	int N,M,P;
	double X[120];
	long long sum,ans;
	double zyun_money_per;

	while(cin >> N >> M >> P) {
		if (N==0 && M==0 && P==0) { break; }
		sum=0;
		REP(i,1,N+1) {
			cin >> X[i];
			sum+=X[i];
		}
		if (X[M] == 0) {
			cout << "0" << endl;
		}
		else {
			zyun_money_per = (100-P)*0.01;
			ans = (sum/X[M])* 100 * zyun_money_per;//切り捨て
			cout << ans << endl;
		}
	}

	return 0;
}
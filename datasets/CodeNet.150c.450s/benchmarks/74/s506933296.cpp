#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>//小数精度 	cout << fixed << setprecision(5) << tmp << endl;
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define FOR(i,k,n)  for (int i=(k); i<(int)(n); ++i)
#define REP(i,n)    FOR(i,0,n)
#define All(X)      (X).begin(),(X).end()

int n,m;
int data[25][50010];

vector<int> money;

int main(){
	int n,m;
	cin >> n >> m;
	REP(i,m){
		int tmp;
		cin >> tmp;
		money.push_back(tmp);
	}
	sort(All(money));
	REP(i,m){
		data[i][0] = 0;
	}
	//data[0][1] = 1;

	FOR(j,1,n+1){
		REP(i,m){
			ll int tmp1,tmp2;
			tmp1 = 10000000;
			tmp2 = 10000000;
			if(i!=0){
				tmp1 = data[i-1][j];
			}
			if(j-money[i]>=0){
				tmp2 = data[i][j-money[i]] + 1;
			}
			data[i][j] = min(tmp1,tmp2);
		}
	}
	cout << data[m-1][n] <<endl;

	return 0;

}
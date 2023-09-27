#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

const int MAX_N = 1000000;
const int MAX_L = 10000;
int q;

string data[MAX_N][2];
ll mem[MAX_L][MAX_L];

ll eval(string &s1, string &s2, int i, int j){
	int ii = i - 1;
	int jj = j - 1;
	if (ii == -1 || jj == -1) return 0;
	if (s1[ii] == s2[jj]) return mem[i - 1][j - 1] + 1;
	if (s1[ii] != s2[jj]) return max(mem[i - 1][j], mem[i][j - 1]);
	throw "exception";
}

ll solve(string s1, string s2){

	int L1 = s1.size();
	int L2 = s2.size();
	rep(i, L1 + 1){
		rep(j, L2 + 1)
		{
			mem[i][j] = eval(s1, s2, i, j);
		}
	}

	return mem[L1][L2];
}

int main() {

	cin >> q;
	rep(i, q){
		cin >> data[i][0];
		cin >> data[i][1];
	}

	rep(i, q){
		cout << solve(data[i][0], data[i][1]) << endl;
	}
}
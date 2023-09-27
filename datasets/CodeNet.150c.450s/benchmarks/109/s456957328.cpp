#include <stdio.h>
#include <cctype>
#include <limits.h>
#include <math.h>
#include <complex>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) static_cast<bitset<16> >(x);
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))

const int INF = 1000000000;
const double EPS = 1e-8;
const double PI = 3.14159;
int dx[4]={0, 1, 0, -1}, dy[4]={-1, 0, 1, 0};
using namespace std;
//typedef pair<int, int> P;
struct P {
	int x, y;
	P(int x, int y):x(x), y(y){}
	P(){}
};

/** Problem2013 : Osaki **/
int MAX = 100000;

int toInt(string s)
{
	int h = (s[0]-'0')*10+s[1]-'0';
	int m = (s[3]-'0')*10+s[4]-'0';
	int se = (s[6]-'0')*10+s[7]-'0';
	
	return h*3600 + m*60 + se;
}

int main()
{
	int N;
	while (cin>>N, N) {
		vector<int> table(MAX);
		string a, b;
		rep(i, N) {
			cin>>a>>b;
			table[toInt(a)]++;
			table[toInt(b)]--;
		}
		
		REP(i, 1, MAX) {
			table[i] += table[i-1];
		}
		
		int ans=0;
		rep(i, MAX) {
			ans = max(ans, table[i]);
		}
		
		cout << ans << endl;
	}
}
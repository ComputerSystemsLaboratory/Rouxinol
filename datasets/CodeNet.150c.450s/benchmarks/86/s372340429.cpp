#include <stdio.h>
#include <limits.h>
#include <math.h>
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

const int INF = 100000000;
typedef double D;
const double EPS = 1e-8;
const double PI = 3.14159;
int dx[4]={-1, 0, 1, 0}, dy[4]={0, -1, 0, 1};
using namespace std;
typedef pair<int, int> P;

/** Problem2018 : Princess's Gamble **/
int main()
{
	int N, M, P;
	while (cin>>N>>M>>P, N||M||P) {
		vector<int> list(N);
		double sum=0;
		rep(i, N) {
			cin >> list[i];
			sum += list[i]*100;
		}
		sum -= sum*P/100;
		
		if (list[M-1] == 0)
			cout << 0 << endl;
		else
			cout << floor(sum/list[M-1]) << endl;
	}
}
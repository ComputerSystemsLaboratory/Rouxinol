#include <stdio.h>
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
#define BINARY(x) cerr << #x << "=" << static_cast<bitset<16> >(x) << endl;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))

const int INF = 10000000;
int dx[4]={-1, 0, 1, 0}, dy[4]={0, -1, 0, 1};
using namespace std;
typedef pair<int, int> P;

/** Problem2204 : Kagisys **/
int main()
{
	set<string> s;
	int N, M; bool open=false;
	cin>>N;
	rep(i, N) {
		string st;
		cin>>st;
		s.insert(st);
	}
	cin>>M;
	rep(i, M) {
		string st;
		cin>>st;
		if (s.count(st)) {
			if (!open)
				cout << "Opened by " << st << endl;
			else
				cout << "Closed by " << st << endl;
			open = !open;
		} else {
			cout << "Unknown " << st << endl;
		}
	}
}
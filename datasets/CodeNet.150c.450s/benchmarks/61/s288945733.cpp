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

/** Problem2149 : Luck Manipulator **/
int main()
{
	int N, A, B, C, X;
	while (cin>>N>>A>>B>>C>>X, N||A||B||C||X) {
		int ans = -1;
		vector<int> list(N);
		rep(i, N) cin>>list[i];
		
		int idx=0;
		
		rep(i, 10001) {
			int XX = X;
			
			if (i>0)
				 XX = (A*X+B)%C;
			
			if (XX == list[idx]) idx++;
			if (idx == N) {
				ans = i;
				break;
			}
			X = XX;
		}
		
		cout << ans << endl;
	}
}
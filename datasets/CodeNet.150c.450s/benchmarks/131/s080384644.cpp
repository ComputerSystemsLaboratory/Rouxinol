#include <stdio.h>
#include "math.h"

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
#define if_range(x, y, w, h) if (0<=x && x<w && 0<=y && y<h)

const int INF = 10000000;
int dx[4]={-1, 0, 1, 0}, dy[4]={0, 1, 0, -1};
using namespace std;
typedef pair<int, int> P;
/** 
 int 了=10;
 **/

/** Problem1180 : ICPCRanking **/
int main()
{
	int a, l;
	while (cin>>a>>l, a||l) {
		map<int, int> s;
		char x[l], y[l];
		int ans=0;
		
		s[a] = 0;
		
		while (1) {
			ans++;

			sprintf(x, "%0*d", l, a);
			sprintf(y, "%0*d", l, a);
			sort(x, x+l);
			sort(y, y+l, greater<int>());

			
			int nx=0, ny=0;
			rep(i, l) {
				nx*=10; nx+=x[i]-'0';
				ny*=10; ny+=y[i]-'0';
			}
		
			int nn = max(nx, ny) - min(nx, ny);

			if (s.find(nn) == s.end()) {
				s[nn] = ans;
				a = nn;
			} else {
				cout << s[nn] << " " << nn << " " << ans-s[nn] << endl;
				break;
			}
		}
	}
}
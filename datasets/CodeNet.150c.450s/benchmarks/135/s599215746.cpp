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
int dx[4]={1, 0, -1, 0}, dy[4]={0, 1, 0, -1};
using namespace std;
typedef pair<int, int> P;

/** Problem2015 : Square Route **/
int main()
{

	int N, M;
	while (cin>>N>>M, N||M) {
		map<int, int> nx, ny;
		vector<int> ix, iy;
		
		rep(i, N) {
			int in;
			cin>>in; ix.push_back(in);
		}
		rep(i, M) {
			int in;
			cin>>in; iy.push_back(in);
		}
		
		rep(i, N) {
			int tmp = ix[i];
			nx[tmp]++;
			REP(j, 1, N-i) {
				tmp+=ix[i+j];
				nx[tmp]++;
			}
		}
		
		rep(i, M) {
			int tmp = iy[i];
			ny[tmp]++;
			REP(j, 1, M-i) {
				tmp+=iy[i+j];
				ny[tmp]++;
			}
		}
		
		map<int, int>::iterator it = nx.begin();
		int ans=0;
		for (; it!=nx.end(); it++) {
			ans += it->second * ny[it->first];
		}
		cout << ans << endl;
	}
}
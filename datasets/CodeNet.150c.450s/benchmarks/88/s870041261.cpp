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
/** Problem1186 : Integral Rectangles **/
int main()
{
	double h, w;
	while (cin>>h>>w, h||w) {
		vector<pair<P, int> >vec;
		
		REP(i, 1, 151) {
			REP(j, 1, 151) {
				if (i>j) {
					vec.push_back(pair<P, int>(P(i*i+j*j, j), i));
				}
			}
		}
		
		sort(vec.begin(), vec.end());
		vector<pair<P, int> >::iterator it = vec.begin();
		for (;it != vec.end(); it++) {
			if (it->first.second==h && it->second==w) {
				it++;
				cout << it->first.second << " " << it->second << endl;
				break;
			}
		}
	}
}
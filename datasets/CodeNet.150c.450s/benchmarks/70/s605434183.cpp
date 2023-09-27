#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <climits>
 
#define REP(i,b,n) for(int i=b;i<n;++i)
#define REPR(i,b,n) for(int i=n-1;i>=b;--i)
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define NCLR(mat) memset(mat, -1, sizeof(mat))
#define EACH(i, c) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define EXIST(s, e) ((s).find(e) != (s).end())
#define BIT(n, b) ((n>>b) & 1)
#define PI acos(-1.0)

using namespace std;

static const double EPS = 1e-9;
typedef pair<int, int> pii;
typedef long long ll;

int mday[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main(){
		
	int m, d;
	
	while(cin>>m>>d, (m||d)){
		
		int dsum = d+2;
		
		for(int i = 0; i < m; ++i){
			dsum += mday[i];
		}
		
		cout << week[dsum%7] << endl;
	}
	
	return 0;
}
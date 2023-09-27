//1508
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

#define LIM 24*60*60
int n;
int in[LIM+10];
int out[LIM+10];

int main(){
	
	int n;
	
	while(cin >> n, n){
	
		CLR(in);
		CLR(out);
	
		for(int i=0; i<n; ++i){
			int hh, mm, ss;
			scanf("%d:%d:%d", &hh, &mm, &ss);
			in[hh*60*60 + mm*60 + ss]++;
			scanf("%d:%d:%d", &hh, &mm, &ss);
			out[hh*60*60 + mm*60 + ss]++;
		}
		
		int res = 0;
		int t = 0;
		
		for(int i=0; i<LIM; ++i){
			
			t += in[i];
			t -= out[i];
			res = max(res, t);

		}
			
		cout << res << endl;	
	}
	
	return 0;
}
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <complex>
#include <functional>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define debug(n) cout<<"# "<<#n<<": "<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define tr(c,i) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

const double EPS=1e-10;

// (a b)(x) (c)
// (d e)(y) (f)
int main()
{
	for(double a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;){
		double x=(c*e-b*f)/(a*e-b*d);
		double y=(a*f-c*d)/(a*e-b*d);
		printf("%.3f %.3f\n",x+EPS,y+EPS);
	}
	
	return 0;
}
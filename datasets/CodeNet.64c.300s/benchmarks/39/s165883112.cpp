//-------------
//include
//-------------
#include <map>
#include <list>
#include <cmath>
#include <vector>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
//-------------
//typedef
//-------------
typedef  long long LL;
typedef  vector<int> VI;
typedef  vector<double> VD;
typedef  string STR;
typedef  pair<int, int> PII;
typedef  vector<int, int> VII;
typedef  map<string, int> MSI;
//-------------
//utillty
//-------------
#define ALL(a)  (a).begin(),(a).end()
#define MK make_pair
#define PB push_back
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define COUT(a) cout<<a<<endl
#define POW2(a) pow(a, 2.0)
//-------------
//repetition
//-------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
//-------------
//debug
//-------------
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define dumpl(c) REP(i,SZ(c))cerr<<#c<<i<<"="<<(c[i])<<endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

const int MOD = 1000000007;
int main()
{

	int n;
	while (cin >> n)
	{
	int count=0;
	REP(a, 10)
	{
		REP(b, 10)
		{
			REP(c, 10)
			{
				REP(d, 10)
				{
					if ((a + b + c + d) == n)count++;
				}
			}
		}
	}
	COUT(count);
	}
#ifdef _DEBUG
	while(1);
#endif // _DEBUG

	return 0;
}
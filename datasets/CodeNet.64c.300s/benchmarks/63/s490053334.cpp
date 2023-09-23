#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<queue>
#include<string>
#include<cstdio>
#include<stack>
#include<cmath>
#include<bitset>
#include<memory>
#include<utility>
using namespace std;
#define FOR(i,m,n) for(i=m;i<n;i++)
#define CLR(a,b) memset(a,b,sizeof(a))
#define ROF(i,m,n) for(i=m;i>=n;i--)
#define BUG cout<<"debug"<<endl;
#define RT return
#define BK break
#define HEAP priority_queue
#define SP " "
#define lowf(a,b,c) lower_bound(a,b,c)
#define upf(a,b,c) upper_bound(a,b,c)
typedef long long LL;
typedef vector<int> VI;
const int INF = 2147483647;
const int NEN = -INF - 1;
const LL LINF = 9223372036854775807;
LL gcd(LL a, LL b)
{
	return b ? gcd(b, a%b):a;
}
int main()
{
	LL a, b,c;
	while (cin >> a >> b)
	{
		c = gcd(a, b);
		cout << c << " " << a*b / c << endl;
	}
    return 0;
}


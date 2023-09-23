#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <sstream>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,k,n) for(int i=k;i<(int)n;i++)
#define rei(n) for(int i=0;i<(int)n;i++)
#define rel(n) for(int l=0;l<(int)n;l++)
#define all(s) s.begin(),s.end()
#define INT_MAX 2147483647
#define debug(x) cout<<#x<<": "<<x<<endl;
#define PI 2*acos(0,0)
#define pb push_back
#define inin(x) int x; cin>>x;
#define ll long long
#define pb push_back

typedef pair<int, int> pii;
typedef pair<int, pii> pipii;

int main()
{
	while (1)
	{
		inin(x); if (x == 0)break;
		x = abs(x - 1000);
		int ans = 0;
		ans += x / 500; x %= 500;
		ans += x / 100; x %= 100;
		ans += x / 50; x %= 50;
		ans += x / 10; x %= 10;
		ans += x / 5; x %= 5;
		ans += x;
		cout << ans << endl;
	}
}
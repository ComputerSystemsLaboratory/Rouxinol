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
	int a = 0, b = 0;
	rep(i, 4)
	{
		inin(x); a += x;
	}
	rep(i, 4)
	{
		inin(x); b += x;
	}
	cout << max(a, b) << endl;

}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#define rep(i, n) for(int i = 0;i < n;i++)
#define reprb(i, n) for(int i = n;i >= 0;i--)
#define reps(i, m, n) for(int i = m;i < n;i++)
#define repsb(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;
vector<int> a;

int main(int argc,char * argv[])
{
	int n,in,mi=0;
	while(true)
	{
		cin>>n;

		if(n==0)	break;
		rep(i,n){
			cin>>in;
			a.pb(in);
			mi=max(mi,in);
		}
		rep(i,n){
			rep(j,n){
				if(i!=j)	mi=min(mi,abs(a[i]-a[j]));
			}
		}
		cout<<mi<<endl;
		a.clear();
	}
	return 0;
}

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
#define FORIT(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define sz size()
#define pb push_back
#define mp make_pair
#define ALL(X) (X).begin(),(X).end()

using namespace std;

const int INF = 1000000000;
const double eps = 1e-8;

vector<int> tetlist(const int n)
{
	vector<int> ary;
	int i = 1;
	while(1)
	{
		if(i*(i+1)*(i+2)/6 > n)
			break;
		else
		{
			ary.pb(i*(i+1)*(i+2)/6);
		  i++;
		}
	}
	return ary;
}

vector<int> search(const int n)
{
	vector<int> ary(n+1,INF);
	const vector<int> tet = tetlist(n);
	const int len = tet.size();
	ary[0] = 0;
	FOR(i,1,n+1)
	{
		REP(j,len)
		{
			if(tet[j] > i)
				break;
			else
				ary[i] = min(ary[i],ary[i-tet[j]]+1);
		}
	}
	return ary;
}

vector<int> tetlist_o(const int n)
{
	vector<int> ary;
	int i = 1;
	while(1)
	{
		if(i*(i+1)*(i+2)/6 > n)
			break;
		else if(((i*(i+1)*(i+2)/6) % 2) == 1)
			ary.pb(i*(i+1)*(i+2)/6);
		i++;
	}
	return ary;
}

vector<int> search_o(const int n)
{
	vector<int> ary(n+1,INF);
	const vector<int> tet = tetlist_o(n);
	const int len = tet.size();
	ary[0] = 0;
	FOR(i,1,n+1)
	{
		REP(j,len)
		{
			if(tet[j] > i)
				break;
			else
				ary[i] = min(ary[i],ary[i-tet[j]]+1);
		}
	}
	return ary;
}

int main(void) {
  vector<int> a1 = search(1000000);
  vector<int> a2 = search_o(1000000);
  while(1)
  {
  	int n;
  	cin>>n;
  	if(!n)break;
  	cout<<a1[n]<<' '<<a2[n]<<endl;
  }
  return 0;
}
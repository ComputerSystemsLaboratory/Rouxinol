#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100005
#define SAFE_FREE(ptr) if( ptr != NULL ){ free(ptr); ptr = NULL; }
typedef unsigned int UINT;
typedef long long ll;
typedef pair<int, int> P;

int n;
int a[25];
int M[2005];

bool solve(int i, int sum,int mm)
{
	if (i == n) return sum == mm;
	if (solve(i + 1, sum + a[i], mm))return true;
	if (solve(i + 1, sum , mm))return true;
	
	return false;
}

int main()
{
	int q;
	cin >> n;
	REP(i, n)cin>>a[i];
	cin >> q;
	REP(i, q)cin >> M[i];

	REP(i, q){
		if (solve(0, 0, M[i]))cout << "yes" << endl;
		else cout << "no" << endl;
		
	}
	return 0;
}
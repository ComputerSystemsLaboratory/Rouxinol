#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100000
#define SAFE_FREE(ptr) if( ptr != NULL ){ free(ptr); ptr = NULL; }
typedef unsigned int UINT;
typedef long long ll;
typedef pair<int, int> P;

int S[MAX_N];
int T[505];
int A[505];
int n, q;
bool mysearch(int key);

int main()
{

	int j = 0;
	int ans = 0;
	bool over =false;

	cin >> n;
	REP(i, n)cin >> S[i];
	cin >> q;
	REP(i, q)cin >> T[i];

	REP(i, n){
		over = false;
		for (int k = 0; k < j; k++)
		{
			if (A[k] == S[i]){
				over=true; break;
			}
		}
		if (mysearch(S[i]) == true&&over==false)
		{
			ans++;
			A[j] = S[i];
			j++;
		}
		
	}
	cout << ans  << endl;
	return 0;
}

inline bool mysearch(int key){
	int i;
	T[q] = key;
	for (i = 0; i < q; i++){
		if (T[i] == key)break;
	}
	if (i == q){ return false; }
	return true;
}
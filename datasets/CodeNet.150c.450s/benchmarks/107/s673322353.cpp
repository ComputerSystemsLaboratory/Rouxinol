#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>	// require sort next_permutation count __gcd reverse etc.
#include <cstdlib>	// require abs exit atof atoi 
#include <cstdio>		// require scanf printf
#include <functional>
#include <numeric>	// require accumulate
#include <cmath>		// require fabs
#include <climits>
#include <limits>
#include <cfloat>
#include <iomanip>	// require setw
#include <sstream>	// require stringstream 
#include <cstring>	// require memset
#include <cctype>		// require tolower, toupper
#include <fstream>	// require freopen
#include <ctime>		// require srand
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(A) A.begin(), A.end()
#define INF 1<<10
/*
	http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_E&lang=jp

	編集距離(Edit Distance)
	
	I: 1文字をカーソル位置に挿入する
	D: カーソル位置の1文字を削除する
	S: カーソル位置の1文字を置き換える
	M: 文字が等しい場合はそのままカーソル位置を1文字分移動する
	
	s: 変更前の文字列（文字列先頭にスペース' ' を入れる）
	t: 変更後の文字列（文字列先頭にスペース' ' を入れる）

	dp[0..N][0..M] = INF
	dp[0][0] = 0
	dp[i][0] = dp[i-1][0] + cost['D'];
	dp[0][j] = dp[0][j-1] + cost['I'];
	
	Iの場合 dp[i][j] = min (dp[i][j], dp[i][j-1] + cost['I'] );
	Dの場合 dp[i][j] = min (dp[i][j], dp[i-1][j] + cost['D'] );
	Sの場合 dp[i][j] = min (dp[i][j], dp[i-1][j-1] + cost['S'] );
	Mの場合 dp[i][j] = min (dp[i][j], (s[i] == t[j] のとき | dp[i-1][j-1] + cost['M'] ) );	
*/

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const int MAX_N = 1002;
const int MAX_M = 1002;
const char com[] = { 'I', 'D', 'S', 'M' };	
const int cost[] = {  1,   1,   1,   0  };

int N, M;
int dp[MAX_N][MAX_M];
char ope[MAX_N][MAX_M];
/*
void disp_ope(void ){
	rep (i, N+1 ){
		rep (j, M+1 ){
			if (i == 0 && j == 0 ) cerr << '_';
			else
				cerr << ope[i][j];
		} // end rep
		cerr << endl;
	} // end rep
}
*/
int solve (string s, string t ){

	map<char,int> c; c.clear();
	rep (i, sizeof (com )/ sizeof (com[0] ) ) c[com[i]] = cost[i];
	
	rep (i, N+1 ) rep (j, M+1 ) dp[i][j] = INF;
	dp[0][0] = 0;
	for (int j = 1; j <= M; j++ ){
		ope[0][j] = 'I';
		dp[0][j] = dp[0][j-1] + c['I'];
	} // end for
	for (int i = 1; i <= N; i++ ){
		ope[i][0] = 'D';
		dp[i][0] = dp[i-1][0] + c['D'];
	} // end for
	
	for (int i = 1; i <= N; i++ ){
		for (int j = 1; j <= M; j++ ){
			int k = INF;
			int nop = 0;
			int pre = -1;
			map<char,int>::iterator it = c.begin();
			for (; it != c.end(); it++ ){
				char cc = (*it).first;
				int  ct = (*it).second;
				switch (cc ){
					case 'I': pre = dp[i][j-1] + ct;if (k > pre ) k = pre, nop = cc; break;
		 			case 'D': pre = dp[i-1][j] + ct;if (k > pre ) k = pre, nop = cc; break;
					case 'S': pre = dp[i-1][j-1] + ct;if (k > pre ) k = pre, nop = cc; break;
					case 'M': pre = dp[i-1][j-1] + ct; if (s[i] == t[j] && k > pre ) k = pre, nop = cc; break;
				} // end switch
			} // end for
			dp[i][j]  = k;
			ope[i][j] = nop;
		} // end for
	} // end for

//	disp_ope();

	return dp[N][M];
}

int main()
{
	memset (ope, 0, sizeof (ope ) );	
	ios_base::sync_with_stdio(0);
	string s, t; cin >> s >> t;

	s = ' ' + s;
	t = ' ' + t;
	N = s.length();
	M = t.length();

	int res = solve (s, t );
	cout << res << endl;
		
	return 0;
}
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

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const string button[10] = { 
	"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
};

int main()
{
	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	while (n-- ){
		string s = ""; cin >> s;
		int m =  s.length();
		map<int,int> p; p.clear();
		string res = "";

		rep (i, m ){
			if (s[i] != '0' ){
				p[(int)(s[i]-'0')]++;
			}else{
				map<int,int>::iterator it = p.begin();
				if (it == p.end() ) continue;
				int a = (*it).first;
				int b = (*it).second; b--;
				int len = button[a].length();
				res += button[a][b%len];
				p.clear();
			} // end if
		} // end rep
		cout << res << endl;

	} // end while

	return 0;
}
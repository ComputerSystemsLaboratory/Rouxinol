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

int main()
{
	string b[10];
	b[1] = ".,!? ";
	b[2] = "abc";
	b[3] = "def";
	b[4] = "ghi";
	b[5] = "jkl";
	b[6] = "mno";
	b[7] = "pqrs";
	b[8] = "tuv";
	b[9] = "wxyz";
/*
	b[1][] = { '.', ',', '!', '?', ' ' };
	b[2][] = { 'a', 'b', 'c' };
	b[3][] = { 'd', 'e', 'f' };
	b[4][] = { 'g', 'h', 'i' };
	b[5][] = { 'j', 'k', 'l' };
	b[6][] = { 'm', 'n', 'o' };
	b[7][] = { 'p', 'q', 'r', 's' };
	b[8][] = { 't', 'u', 'v' };
	b[9][] = { 'w', 'x', 'y', 'z' };
*/
//	cut here before submit 
//	freopen ("testcase.KM", "r", stdin );
	int n;
	scanf ("%d", &n );
	while (n-- ){
		string mesg = "";
		cin >> mesg;
		int m = mesg.length();
		int c = -1, cnt = -1;
		string ans = "";
		rep (i, m ){
			if (mesg[i] != '0' ){
				c = (char)(mesg[i] - '0');
				cnt++;
			}else{
				if (c != -1 ){
//					if (cnt == 1 ) cnt--;
					ans += b[c][(cnt) % b[c].length() ];
				} // end if
				c = -1;
				cnt = -1;
			} // end if
		} // end rep
		cout << ans << endl;
	} // end loop
		
	return 0;
}
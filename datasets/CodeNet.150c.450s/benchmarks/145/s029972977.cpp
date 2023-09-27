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
//	cut here before submit 
//	freopen ("testcase.ES", "r", stdin );
	string str = "";
	map<string, int> words; words.clear();
	int max_len = 0;
	int max_freq = 0;
	while (getline (cin, str ) ){

		int n = str.length();
		rep (i, n ){
			if (isalpha (str[i] ) )
				str[i] = tolower(str[i] );
		} // end rep

		string s = "";
		stringstream ss (str );
		while (ss >> s ){
			max_len = max (max_len, (int)s.length() );
			words[s]++;
			max_freq = max (max_freq, words[s] );
		} // end while
	} // end while
	map<string,int>::iterator it = words.begin();
	string res_f = "", res_l = "";
	for (; it != words.end(); it++ ){
		string w = (*it).first;
		int cnt = (*it).second;
		if (cnt == max_freq ){
			res_f = w;
		} // end if
		if (w.length() == max_len ){
			res_l = w;
		} // end if
	} // end for
	cout << res_f << ' ' << res_l << endl;

	return 0;
}
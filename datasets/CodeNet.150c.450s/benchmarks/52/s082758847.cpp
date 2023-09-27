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
//	freopen ("testcase.SRC", "r", stdin );
	string str = "";
	stack<int> st;
	while (getline (cin, str ) ){
		stringstream ss (str );
		int car = -1;
		ss >> car;
		if (car != 0 ){
			st.push (car );
		}else{
			cout << st.top() << endl;
			st.pop();
		} // end if
	} // end while
		
	return 0;
}
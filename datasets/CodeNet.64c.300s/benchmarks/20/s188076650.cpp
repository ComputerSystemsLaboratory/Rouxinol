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

int f(int x )
{
	return x*x;
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.Integral", "r", stdin );
	string str = "";

	while (getline (cin, str ) ){ 
		stringstream ss (str );
		int d;
		ss >> d;
		int area = 0;
		for (int x = d; x <= 600 - d; x += d ){
			area += d*f(x);
		} // end for
		cout << area << endl;
	} // end loop
		
	return 0;
}
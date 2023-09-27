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
const string days[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
// 						   Jan Feb Match April May June July, Aug Sep Oct No  Dec
const int months[] = { 0, 31, 29, 31,   30,   31, 30,  31, 31, 30, 31, 30, 31 };
int main()
{
//	cut here before submit 
//	freopen ("testcase.What_day_is_today", "r", stdin );
	int month, day;
	while (scanf ("%d %d", &month, &day ) && month ){
		int cnt = 3;	// 2004/01/01 is Thursday
		for (int i = 0; i < month; i++ ){
			cnt += months[i];
		} // end for
		cnt += day;
		cnt--;
		cout << days[cnt % 7] << endl;
	} // end loop
		
	return 0;
}
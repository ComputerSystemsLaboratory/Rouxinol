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

const char unit[] = { 'm', 'c', 'x', 'i' };
const int  u[] = { 1000, 100, 10, 1 };
int ston (string s )
{
	int n = s.length();	
	int res = 0;
	rep (i, 4 ){
		string::size_type p;
		if ((p = s.find (unit[i] ) ) != string::npos ){
			if (p > 0 && isdigit(s[p-1] ) ){
				res += (int)(s[p-1] - '0')*u[i];
			}else{
				res += u[i];
			} // end if
		} // end if
	} // end rep
	if (isdigit(s[n-1] ) ){
		res += (int)(s[n-1] - '0' );
	} // end if
	
	return res;
}

string itos (int n )
{
	string res = "";

	int m = n/1000;
	int c = (n/100 % 10);
	int x = (n/10 % 10);
	int i = n % 10;
	
	if (m != 0 ){
		if (m != 1 ) res += (char)(m+'0');
		res += 'm';
	} // end if
	if (c != 0 ){
		if (c != 1 ) res += (char)(c+'0');
		res += 'c';
	} // end if
	if (x != 0 ){
		if (x != 1 ) res += (char)(x+'0');
		res += 'x';
	} // end if
	if (i != 0 ){
		if (i != 1 ) res += (char)(i+'0');
		res += 'i';
	} // end if

	return res;
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.NS", "r", stdin );
	int n;
	scanf ("%d", &n );
	while (n-- ){
		string ex1 = "", ex2 = "";
		cin >> ex1 >> ex2;

		int m1 = ston (ex1 ), m2 = ston (ex2 );
		int add = m1 + m2;
		string res = itos (add );

		cout << res << endl;
	} // end loop
		
	return 0;
}
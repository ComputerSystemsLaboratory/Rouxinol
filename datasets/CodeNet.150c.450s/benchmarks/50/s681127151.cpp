#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <numeric>
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <fstream>
using namespace std;
int coins[] = { 500, 100, 50, 10, 5, 1 };

int main()
{
//	cut here before submit 
//	freopen ("testcase.change2", "r", stdin );
	string str = "";

	while (getline (cin, str ) ){
		int money;
		stringstream ss(str);
		ss >> money;
		
		if (money == 0 ){
			break;
		} // end if
		int change = 1000 - money;
		int res = 0;
		int i;

		for (i = 0; i < sizeof(coins)/sizeof(coins[0]); ++i) {
			while (change >= coins[i] ){
				change -= coins[i];
				++res;
			} // end while
		} // end for

		cout << res << endl;		
		
	} // end loop
		
	return 0;
}
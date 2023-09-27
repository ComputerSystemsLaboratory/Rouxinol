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

int dfs (const int depth, const int sum, int currs, int currd, int j)
{
	int count = 0;
	int i;

	if (currd == depth){
		if (sum == currs){
			return 1;
		}else{
			return 0;
		} // end if
	} // end if
	++currd;
	
	for (i = j; i <= min(9,sum); ++i){
		currs += i;
		count += dfs (depth, sum, currs, currd, i+1);
		currs -= i;
	} // end for

	return count;
}
 

int main()
{
//	cut here before submit 
//	freopen("testcase.si", "r", stdin);
	string str = "";

	while (getline (cin, str ) ){
		int n, sum;
		int res = 0;
		stringstream ss(str);
		ss >> n >> sum;

		if (n == 0 && sum == 0){
			break;
		} // end if
		
		res = dfs (n, sum, 0, 0, 0 );

		cout << res << endl;
	} // end while
	
	return 0;
}
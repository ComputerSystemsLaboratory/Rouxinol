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

int main()
{
//	cut here before submit 
//	freopen("testcase.wdt", "r", stdin);
	// 2004/01/01 is Thursday
	const string week[] = {
	"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	const int days[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
	string str = "";
	
	while (1){
		int month = 0;
		int day = 0;		
		cin >> month >> day;
		if (month == 0 && day == 0){
			break;
		} // end if
		int num = 0;
		for (int i = 0; i < month; ++i){
			num += days[i];
		} // end for
		num += day;
		cout << week [( num - 1 + 3 ) % 7 ] << endl;
	} // end while
		
	return 0;
}
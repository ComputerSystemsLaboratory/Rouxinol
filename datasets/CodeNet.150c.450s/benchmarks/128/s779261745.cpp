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
	string str = "";

	getline (cin, str );

	if (str.length() != 1){
		reverse (str.begin(), str.end() );
	} // end if

	cout << str << endl;	
		
	return 0;
}
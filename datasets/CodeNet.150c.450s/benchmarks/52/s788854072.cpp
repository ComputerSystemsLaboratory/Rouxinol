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
//	freopen("testcase.src", "r", stdin);
	string str = "";
	stack <int> R;

	while ( getline (cin, str )){
		int n;
		stringstream ss(str);
		ss >> n;
		if (n != 0){
			R.push(n);
		}else if (n == 0 && !R.empty()){
			cout << R.top() << endl;
			R.pop();
		} // end if
	} // end for

	return 0;
}
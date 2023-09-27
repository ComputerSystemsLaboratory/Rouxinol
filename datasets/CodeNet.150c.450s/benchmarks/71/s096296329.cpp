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

	while (getline (cin, str)){
		int n = 0;
		int res = 0;
		stringstream ss(str);
		ss >> n;
		for (int i = 0; i < 10000; ++i){
			int a = i/1000;
			int b = (i/100) % 10;
			int c = (i/10) % 10;
			int d = i % 10;
			
			if (a + b + c + d == n){
				++res;
			} // end if
		} // end for
		cout << res << endl;	
	} // end while

	return 0;
}
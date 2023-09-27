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
//	freopen("testcase.mss", "r", stdin);
	string str = "";
	int n;

	while (1){
		getline (cin, str );
		stringstream ssn(str);
		ssn >> n;
		if (n == 0){
			break;
		} // end if
		vector <int> a(n + 1, 0);
		int i,j;

		vector <int> sum (n + 1, 0);

		for (i = 1; i <= n; ++i){
			getline (cin, str );
			stringstream ss(str);
			ss >> a[i];
		} // end for
		for (i = 1; i <= n; ++i){
			sum[i] = accumulate (a.begin(), a.begin() + i + 1, 0 );
//			cout << "sum[" << i << "]:" << sum[i] << endl;
		} // end for

		int maxn = INT_MIN;
		for (i = 1; i <= n; ++i){
			for (j = i; j <= n; ++j){
//				cout << " sum[" << j << "]:" << sum[j];
//				cout << " sum[" << (i-1) << "]:" << sum[i-1];
//				cout << " sub: " << (sum[j] - sum[i-1]) << endl;
				 maxn = max (maxn , sum[j] - sum[i - 1]);
			} // end for
		} // end for
		cout << maxn << endl;			

	} // end while

	return 0;
}
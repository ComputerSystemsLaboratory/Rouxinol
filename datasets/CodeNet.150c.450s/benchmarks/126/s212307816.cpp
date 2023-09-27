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
//	freopen ("testcase.schoolroad2", "r", stdin );
	string str = "";

	while (getline (cin, str ) ){
		int a, b;
		stringstream ssn (str);
		ssn >> a >> b;
		
		if (a == 0 && b == 0 ){
			break;
		} // end if
		vector <vector <int> > dp (b + 1, vector <int> (a + 1, -1 ) );
		int i,j;

		for (i = 0; i <= b; ++i){
			dp[i][0] = 0;
		} // end for
		for (j = 0; j <= a; ++j){
			dp[0][j] = 0;
		} // end for

		dp[1][1] = 1;

		getline (cin, str );
		int m;
		stringstream ssm (str );
		ssm >> m;

		for (i = 0; i < m; ++i){
			getline (cin, str );
			int x, y;
			stringstream ss (str );
			ss >> x >> y;
			dp[y][x] = 0;
		} // end for

		for (i = 1; i <= b; ++i){
			for (j = 1; j <= a; ++j){
				if (dp[i][j] != 0 ){
					if (i == 1 && j == 1){
						continue;
					}else{
						dp[i][j] = dp[i][j-1] + dp[i-1][j];
					} // end if
				} // end if
			} // end for
		} // end for

		cout << dp[b][a] << endl;
	} // end loop
		
	return 0;
}
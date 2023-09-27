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
//	freopen ("testcase.score", "r", stdin );
	string str = "";

	vector <vector <int> > score (2, vector <int> (4, 0 ) );
	int i, j;

	for (i = 0; i < 2; ++i){
		getline (cin, str );
		stringstream ss(str);
		
		for (j = 0; j < 4; ++j){
			ss >> score[i][j];
		} // end for
	} // end for
	
	vector <int> total (2, 0 );

	for (i = 0; i < 2; ++i){
		 total[i] = accumulate (score[i].begin(), score[i].end(), 0 );
	} // end for
	
	cout << max (total[0], total[1] ) << endl;

	return 0;
}
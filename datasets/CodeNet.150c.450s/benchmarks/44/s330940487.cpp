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
//	freopen("testcase.hb", "r", stdin);
	string str = "";
	
	while (getline (cin, str ) ) {
		vector <int> A(4, 0);
		int i,j;

		stringstream ssa (str );
		for (i = 0; i < 4; ++i){
			ssa >> A[i];
		} // end for

		getline (cin, str );
		vector <int> B (4, 0 );

		stringstream ssb (str );
		for (i = 0; i < 4; ++i){
			ssb >> B[i];
		} // end for

		int hit = 0;
		int blow = 0;

		for (i = 0; i < 4; ++i){
			if (A[i] == B[i]){
				++hit;
				A[i] = B[i] = -1;
			} // end if
		} // end for
		
		for (i = 0; i < 4; ++i){
			for (j = 0; j < 4; ++j){
				if (A[i] != -1 && B[j] != -1 && A[i] == B[j]){
					++blow;
					A[i] = B[j] = -1;
				} // end if
			} // end for
		} // end for
		cout << hit << ' ' << blow << endl;
	} // end while

	return 0;
}
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
//	freopen ("testcase.card0500", "r", stdin );
	string str = "";
	int n;

	while (getline (cin, str ) ){
		stringstream ssn(str);
		ssn >> n;
		if (n == 0 ){
			break;
		} // end if
		int sumA = 0, sumB = 0;
		int i;

		for (i = 0; i < n; ++i){
			int cardA = 0, cardB = 0;
			getline (cin, str );
			stringstream ss(str);
			
			ss >> cardA >> cardB;
			if (cardA > cardB ){
				sumA += (cardA + cardB);
			}else if (cardA < cardB){
				sumB += (cardA + cardB);
			}else{
				sumA += cardA;
				sumB += cardB;
			} // end if
		} // end for
		cout << sumA << ' ' << sumB << endl;

	} // end loop
	
	return 0;
}
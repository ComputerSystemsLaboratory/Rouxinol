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
//	freopen("testcase.fn", "r", stdin);
	string str = "";

	getline (cin, str );
	stringstream ss(str);
	vector <int> num(5, 0);

	int i;
	for (i = 0; i < 5; ++i){
		ss >> num[i];
	} // end for

	sort (num.begin(), num.end(), greater<int>() );

	for (i = 0; i < 5; ++i){
		cout << num[i];
		if (i != 4){
			cout << ' ';
		} // end if
	} // end for
	cout << endl;
		
	return 0;
}
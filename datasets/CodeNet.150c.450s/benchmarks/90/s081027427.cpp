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
//	freopen("testcase.mv", "r", stdin);
	string str = "";
	map <int, int> a;

	while ( getline (cin, str ) ){
		int n;
		stringstream ss(str);
		ss >> n;
		++a[n];
	} // end for
	multimap <int, int, greater<int> > order;
	map <int, int>::iterator it = a.begin();
	
	for (; it != a.end(); ++it){
		order.insert (make_pair ((*it).second, (*it).first ) );
	} // end for

	it = a.begin();
	multimap <int, int, greater<int> >::iterator ito = order.begin();
	int num = (int)order.count ((*it).second );
	for (int i = 0; i < num; ++i, ++ito){
		cout << (*ito).second << endl;
	} // end for
		
	return 0;
}
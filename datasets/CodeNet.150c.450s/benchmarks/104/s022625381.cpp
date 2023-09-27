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
//	freopen("testcase.dl", "r", stdin);
	string str = "";
	string res = "";
	int w;
	int n;

	getline (cin, str );
	stringstream ssw(str);
	ssw >> w;

	vector <int> Aj (w, 0);
	int i;
	for (i = 0; i < w; ++i){
		Aj[i] = i;
	} // end for
			
	getline (cin, str );
	stringstream ssn(str);
	ssn >> n;

	for (i = 0; i < n; ++i){
		getline (cin, str );
		int a,b;
		str = str.replace(str.find(','), 1, " ");

		stringstream ss(str);
		ss >> a >> b;
//		cout << "a: " << a << " b: " << b << endl;
		swap(Aj[a-1], Aj[b-1]);
	} // end for

	for (i = 0; i < w; ++i){
		cout << (Aj[i] + 1) << endl;	
	} // end for
	
	return 0;
}
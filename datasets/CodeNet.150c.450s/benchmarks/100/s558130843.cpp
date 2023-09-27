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

long long factorial (long n){
	
	if (n == 0LL || n == 1LL){
		return 1LL;
	} // end if
	return n*factorial(n-1);
}

int main()
{
	string str = "";

	while (getline (cin, str )){
		long long res;
		long long n;
		stringstream ssn(str);
		ssn >> n;
		res = factorial(n);
		cout << res << endl;	
	} // end while
		
	return 0;
}
#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <numeric>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main ()
{
	int S;
	cin >> S;

	int s = S % 60;
	int m = (S % 3600) / 60;
	int h = S / 3600;
	
	cout << h << ":" << m << ":" << s << endl;

	return 0;
}

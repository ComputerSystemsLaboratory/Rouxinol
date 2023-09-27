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
	int a, b, c;
	cin >> a >> b >> c;

	cout << min({a, b, c}) << " ";
	cout << (a + b + c) - min({a, b, c}) - max({a, b, c}) << " ";
	cout << max({a, b, c}) << endl;
	
	return 0;
}

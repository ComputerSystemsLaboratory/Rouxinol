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
	int a, b;
	cin >> a >> b;
	cout << "a " << (a < b ? "<" : (a == b ? "==" : ">")) << " b" << endl;
	
	return 0;
}

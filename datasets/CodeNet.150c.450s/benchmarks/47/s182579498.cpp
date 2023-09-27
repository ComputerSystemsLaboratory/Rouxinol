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
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;

	cout << (r <= x && r <= y && x <= W - r && y <= H - r ? "Yes" : "No") << endl;
	
	return 0;
}

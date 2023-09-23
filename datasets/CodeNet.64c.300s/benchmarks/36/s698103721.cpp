#include <iostream>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	int mi = min(x, min(y, z));
	int ma = max(x, max(y, z));
	cout << mi << " " << x + y + z - mi - ma << " " << ma << endl;
	return 0;
}
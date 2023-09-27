#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	string ans = (x < y) ? (y < z) ? "Yes" : "No" : "No";
	cout << ans << endl;
	return 0;
}
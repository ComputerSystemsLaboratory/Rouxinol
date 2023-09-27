#include <iostream> 
using namespace std;
int main(void)
{
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;
	if (x - r<0 || x + r>w || y - r < 0 || y + r > h)cout << "No";
	else cout << "Yes";
	cout << endl;
}

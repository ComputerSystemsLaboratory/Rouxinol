#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	double ax,ay,bx,by,cx,cy,dx,dy;
	vector<int> r;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
		if (ax == bx)
		{
			cx == dx ? r.push_back(1) : r.push_back(0);
		} else if (cx == dx) {
			r.push_back(0);
		} else {
			(ay-by)/(ax-bx) == (cy-dy)/(cx-dx) ? r.push_back(1) : r.push_back(0);
		}
	}
	for (int i=0; i<n; i++)
	{
		r[i] == 1 ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}
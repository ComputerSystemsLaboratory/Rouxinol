#include<iostream>
using namespace std;
int main()
{
	int x, y;
	while (cin >> x >> y, !(x == 0 && y == 0)) {
		if (x <= y)cout << x << " " << y << endl;
		else cout << y << " " << x << endl;
	}
    return 0;
}
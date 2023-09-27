#include <iostream>
using namespace std;
int main(){
	int width, height, r, x, y;
	cin >> width >> height >> x >> y >> r;
	if ((x - r >= 0) && (x + r <= width )&& (y - r >= 0) && (y + r <= height))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
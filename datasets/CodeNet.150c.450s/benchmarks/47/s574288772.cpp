#include <iostream>
using namespace std;

int main(void)
{
	int w, h;
	int x, y, r;
	int ct;
	
	ct = 0;
	cin >> w >> h >> x >> y >> r;
	
	x += r;
	y += r;
	
	if (x > w || y > h){
		ct++;
	}
	
	x -= r * 2;
	y -= r * 2;
	
	if (x < 0 || y < 0){
		ct++;
	}
	
	if (ct != 0){
		cout << "No";
	}
	else {
		cout << "Yes";
	}
	
	cout << endl;
	
	return (0);
}
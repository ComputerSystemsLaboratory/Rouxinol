#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int r , x, y;
	cin >> x >> y;
	if (x < y){
		swap(x, y);
	}
	while (y > 0){
		r = x % y;
		x = y;
		y = r;
	}
	cout << x << endl;
}
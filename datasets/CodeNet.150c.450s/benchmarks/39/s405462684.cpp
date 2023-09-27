#include <iostream>
using namespace std;

int main() {
	int x, y;	
	cin >> x >> y;
	
	int area = x*y;
	int peri = 2*(x+y);		
	cout << area << " " << peri << endl;
	
	return 0;
}

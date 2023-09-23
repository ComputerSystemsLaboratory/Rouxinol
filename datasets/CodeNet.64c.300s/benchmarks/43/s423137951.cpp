#include <iostream>
using namespace std;
int main(){
	int a, b, c, d = 0;
	int e, f, g, h = 0;
	cin >> a >> b >> c >> d;
	cin >> e >> f >> g >> h;
	if (a + b + c + d > e + f + g + h){
		cout << a + b + c + d << endl;
	}
	else if (a + b + c + d < e + f + g + h){
		cout << e + f + g + h << endl;
	}
	else if (a + b + c + d == e + f + g + h){
		cout << a + b + c + d << endl;
	}
	return 0;
}
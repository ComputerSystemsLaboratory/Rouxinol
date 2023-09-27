#include <iostream>

using namespace std;



struct pt {

	double x;

	double y;

};



int main() {

	int num;

	cin >> num;

	while(num--) {

		pt p1, p2, p3, p4;

		cin >> p1.x >> p1.y;

		cin >> p2.x >> p2.y;

		cin >> p3.x >> p3.y;

		cin >> p4.x >> p4.y;

		pt v1 = {p1.x-p2.x, p1.y-p2.y};

		pt v2 = {p3.x-p4.x, p3.y-p4.y};

		if (v1.y==0 && v2.y==0) cout << "YES\n";

		else if (v1.x/v1.y == v2.x/v2.y) cout << "YES\n";

		else cout << "NO\n";

	}

	return 0;

}
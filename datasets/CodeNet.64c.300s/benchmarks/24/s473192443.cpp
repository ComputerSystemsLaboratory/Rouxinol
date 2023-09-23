#include <iostream>

using namespace std;

int main(void) {

	for (int n = 0; (cin >> n) && n != 0;) {
		int aPoint = 0, bPoint = 0;
		for (int i = 0; i < n; i++) {
			int aCardPoint = 0, bCardPoint = 0;
			cin >> aCardPoint >> bCardPoint;
			if (aCardPoint == bCardPoint) {
				aPoint += aCardPoint;
				bPoint += bCardPoint;
			} else if (aCardPoint > bCardPoint) {
				aPoint += aCardPoint + bCardPoint;
			} else if (aCardPoint < bCardPoint) {
				bPoint += aCardPoint + bCardPoint;
			}
		}
		cout << aPoint << " " << bPoint << endl;
	}

	return 0;
}
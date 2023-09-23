#include <iostream>
using namespace std;
int main(void) {
	int winX, winY;
	int centerX, centerY, radius;
	string result;
	cin >> winX >> winY >> centerX >> centerY >> radius;
	if(centerY - radius >= 0 && centerY + radius <= winY && 
			centerX -radius >= 0 && centerX + radius <= winX) {
		result = "Yes";
	} else {
		result = "No";
	}
	cout << result << endl;
	return 0;
}
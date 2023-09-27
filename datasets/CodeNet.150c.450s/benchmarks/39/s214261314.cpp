#include <iostream>
using namespace std;

int main() {
	int width;
	int height;

	cin >> height >> width;

	int area = height * width;
	int perimeter = width * 2 + height * 2;

	cout << area << ' ' << perimeter << endl;
}

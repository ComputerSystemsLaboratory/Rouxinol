#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>

using namespace std;

int main() {
	int h[10];
	for (int i = 0; i < 10; i++)cin >> h[i];

	sort(h, h + 10);
	reverse(h, h + 10);
	cout << h[0] << endl << h[1] << endl << h[2] << endl;
}

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int height[10];

	for (int i = 0; i < 10; i++) {
		cin >> height[i];
	}

	sort(height, height+10, greater<int>());

	for (int i = 0; i < 3; i++) {
		cout << height[i] << endl;
		
	}	

	return 0;
}

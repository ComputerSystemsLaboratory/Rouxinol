#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<long> height(10);
	for (long i = 0; i < 10; i++) cin >> height[i];
	sort(height.begin(), height.end());
	cout << height[9] << endl;
	cout << height[8] << endl;
	cout << height[7] << endl;
	return 0;
}
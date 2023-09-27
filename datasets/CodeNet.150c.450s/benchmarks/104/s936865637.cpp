#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	int w, n;
	cin >> w;
	vector<int> num(31);
	for (int i = 1; i <= w; ++i) {
		num[i] = i;
	}
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int a, b;
		char split;
		cin >> a >> split >> b;
		int temp;
		temp = num[a];
		num[a] = num[b];
		num[b] = temp;
	}
	for (int i = 1; i <= w; ++i) {
		cout << num[i] << endl;
	}
	return 0;
}
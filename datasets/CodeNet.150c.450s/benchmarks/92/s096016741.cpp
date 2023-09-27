#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
	vector<int> sum;
	int a, b;
	while (cin >> a >> b) sum.push_back(a + b);
	for_each(sum.begin(), sum.end(), [](int i) {
				if (i == 0) {
					cout << i << endl;
				} else {
					cout << static_cast<int>(log10(i)) + 1 << endl;
				}
			});
	return 0;
}
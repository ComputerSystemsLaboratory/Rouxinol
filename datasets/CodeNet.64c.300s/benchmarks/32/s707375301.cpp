#include <iostream>

using namespace std;

int main(){
  int n;
	cin >> n;
	long max = 0, min = 0, total = 0;
	for (int i = 0; i < n;++i) {
		int num;
		cin >> num;
		if (num > max || max == 0) max = num;
		if (num < min || min == 0) min = num;
		total += num;
	}
	cout << min << " " << max << " " << total << endl;
  return 0;
}
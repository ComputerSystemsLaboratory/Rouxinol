#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, mode=0;
	vector<int> numbers(101, 0);
	while (cin >> n) {
        numbers[n]++;
        if (numbers[n] > mode) { mode=numbers[n]; }
	}
    for (int i = 0; i != numbers.size(); ++i) {
        if (numbers[i] == mode) { cout << i << endl; }
    }
    return 0;
}
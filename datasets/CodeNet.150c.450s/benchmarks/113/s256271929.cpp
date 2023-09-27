#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
	int num = 1;
	int tmp;
	while (1) {
		cin >> tmp;
		if (tmp == 0)
			break;
		cout << "Case " << num << ": " << tmp << endl;
		num++;
	}
}
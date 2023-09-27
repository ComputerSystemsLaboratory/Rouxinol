#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> array, num(101, 0), out;
	int inp, MAX = 0;
	int flag = 0;
	
	while (cin >> inp) {
		array.push_back(inp);
	}

	for (int i = 0; i < array.size(); i++) {
		MAX = max(++num[array[i]], MAX);		
	}

	for (int i = 1; i < num.size(); i++) {
		if (MAX == num[i])cout << i << endl;
	}

	return 0;
}
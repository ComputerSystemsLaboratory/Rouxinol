#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int num, max, min, tem, point[200], flag;
	vector<int> ans;
	
	while (cin >> num >> min >> max, num && min && max) {
		tem = -1;
		flag = 0;
		for (int i = 1;i <= num;i++) {
			cin >> point[i];
		}
		for (int i = min;i <= max;i++) {
			if (tem <= point[i] - point[i + 1]) {
				tem = point[i] - point[i + 1];
				flag = i;
			}
		}
		ans.push_back(flag);
	}

	for (auto itr = ans.begin();itr != ans.end();itr++) {
		cout << *itr << endl;
	}

	return 0;
}

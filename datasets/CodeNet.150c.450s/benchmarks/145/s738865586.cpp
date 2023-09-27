#include<iostream>
#include<string>
using namespace std;

int main() {
	string str[1001], tmp;
	int max_num = 0, max_length = 0, i, max = 1, max_str = 0, a[1001] = {};
	
	while (cin >> tmp) {
		for (i = 0; i < tmp.size(); i++) {
			if ('A' <= tmp[i] && tmp[i] <= 'Z')
				tmp[i] = tmp[i] + 'a' - 'A';
		}

		for (i = 0; i < max; i++) {
			if (str[i] == tmp) {
				a[i]++;
				if (max_str < a[i]) {
					max_str = a[i];
					max_num = i;
				}
				if (tmp.size() > max_length)
					max_length = (int)tmp.size();
				break;
			}
		}
		if (i >= max) {
			str[i-1] = tmp;
			max++;
			a[i - 1]++;
			if (max_str < a[i-1]) {
				max_str = a[i - 1];
				max_num = i - 1;
			}
			if (tmp.size() > max_length)
				max_length = (int)tmp.size();
		}
	}
	cout << str[max_num];

	for (i = 0; i < max; i++) {
		if ((int)str[i].size() == max_length)
			cout <<" "<< str[i] << endl;
	}
	return 0;
}
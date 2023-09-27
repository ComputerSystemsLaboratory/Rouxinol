#include <iostream>
#include <algorithm>

using namespace std;

char taro[100];
char hanako[100];

void clean(char arr[]) {
	for (int i = 0; i < 100; i++)
		arr[i] = 0;
}

int main() {
	int n, taro_p = 0, hanako_p = 0;
	bool f;
	cin >> n;
	for (int i = 0; i < n; i++) {
		clean(taro); clean(hanako);
		cin >> taro >> hanako;
		
		f = true;
		for (int j = 0; j < 100; j++) {
			if (taro[j] < hanako[j]) {
				hanako_p += 3;
				f = false;
				break;
			}
			else if (taro[j] > hanako[j]) {
				taro_p += 3;
				f = false;
				break;
			}
		}
		if (f) {
			taro_p++;
			hanako_p++;
		}
	}
	
	cout << taro_p << " " << hanako_p << endl;

	return 0;
}
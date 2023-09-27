#include <iostream>
using namespace std;

int n,m;
pair<char, char> p[100];
char ch[100000];

int find_change(char *a) {
	for (int i = 0; i < n; i++) {
		if (p[i].first == *a) {
			*a = p[i].second;
			return 0;
		}
	}
	return 1;
}

int main(){

	while (cin >> n && n > 0) {
		for (int i = 0; i < n; i++) {
			cin >> p[i].first >> p[i].second;
		}
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> ch[i];
			find_change(ch + i);
		}
		for (int i = 0; i < m; i++)
			cout << ch[i];
		cout << endl;
	}
	return 0;
}
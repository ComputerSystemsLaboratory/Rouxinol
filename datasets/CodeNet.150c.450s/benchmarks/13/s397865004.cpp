#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char s[100], p[100];
	int i, j, sl, pl;
	bool judge = false;
	cin >> s >> p;
	sl = strlen(s);
	pl = strlen(p);
	for (i = 0; i < sl; i++) {
		for (j = 0; j < pl; j++) {
			if (s[(i + j) % sl] != p[j]) {
				break;
			}
		}
		if (j == pl) {
			judge = true;
			break;
		}
	}
	if (judge == true)cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
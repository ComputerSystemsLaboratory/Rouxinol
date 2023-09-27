#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

int main() {
	int i, wl, tl, count = 0;
	char w[10], t[1000];
	cin >> w;
	wl = strlen(w);
	for (i = 0; i < wl; i++) {
		if ('A' <= w[i] && w[i] <= 'Z')w[i] += 'a' - 'A';
	}
	while (1) {
		cin >> t;
		if (!strcmp(t, "END_OF_TEXT"))break;
		tl = strlen(t);
		for (i = 0; i < tl; i++) {
			if ('A' <= t[i] && t[i] <= 'Z')t[i] += 'a' - 'A';
		}
		if (!strcmp(w, t))count++;
	}
	cout << count << endl;
	return 0;
}
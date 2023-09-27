#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string T, H;
	char t[1001], h[1001];
	int score_t, score_h;
	score_t = 0;
	score_h = 0;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++) {
		scanf("%s %s", t, h);
		T = string(t);
		H = string(h);
		if(T < H) {
			score_h += 3;
		} else if(H < T) {
			score_t += 3;
		} else if(T == H) {
			score_t++;
			score_h++;
		}
	}
	printf("%d %d\n", score_t, score_h);
	return 0;
}
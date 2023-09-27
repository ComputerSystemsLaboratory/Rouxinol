#include <cstdio>
int readint() {
	char ch = getchar_unlocked();
	int res = 0;
	while('0' <= ch && ch <= '9') {
		res = res * 10 + (ch - '0');
		ch = getchar_unlocked();
	}
	return res;
}
char buf[1024];
void writeint(int x, char endch) {
	int ptr = 0, g;
	while(x > 0) {
		g = x / 10;
		buf[ptr++] = x - g * 10;
		x = g;
	}
	if(ptr == 0) {
		buf[ptr++] = 0;
	}
	while(ptr--) {
		putchar_unlocked(buf[ptr] + '0');
	}
	putchar_unlocked(endch);
}
int cnt[10002];
int main() {
	int N = readint();
	for(int i = 0; i < N; ++i) {
		++cnt[readint() + 1];
	}
	for(int i = 0; i < 10001; ++i) {
		cnt[i + 1] += cnt[i];
	}
	int rem = N;
	for(int i = 0; i < 10001; ++i) {
		int g = cnt[i + 1] - cnt[i];
		for(int j = 0; j < g; ++j) {
			writeint(i, (--rem) ? ' ' : '\n');
		}
	}
	return 0;
}

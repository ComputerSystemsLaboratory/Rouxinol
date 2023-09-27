#include <queue>
#include <cstdio>
int main() {
	register int u, cur; register char c, cz[13];
	std::priority_queue<int> que;
	while (true) {
		c = getchar_unlocked();
		c = getchar_unlocked();
		c = getchar_unlocked();
		if (c == 'd') break;
		if (c == 't') {
			getchar_unlocked();
			getchar_unlocked();
			getchar_unlocked();
			getchar_unlocked();
			getchar_unlocked();
			u = que.top(), cur = 0; que.pop();
			if (u == 0) cz[cur++] = 48;
			while (u) cz[cur++] = u % 10 + 48, u /= 10;
			while (cur) putchar_unlocked(cz[--cur]);
			putchar_unlocked('\n');
		}
		else {
			getchar_unlocked();
			getchar_unlocked();
			getchar_unlocked();
			getchar_unlocked();
			c = getchar_unlocked();
			cur = 0;
			while (48 <= c && c <= 57) cur = cur * 10 + c - 48, c = getchar_unlocked();
			que.push(cur);
		}
	}
	return 0;
}
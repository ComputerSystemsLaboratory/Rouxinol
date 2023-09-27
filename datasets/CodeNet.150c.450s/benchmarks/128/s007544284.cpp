#include <cstdio>
#include <cstring>

template <typename T> void swap(T &a, T &b) {
	T t = a;
	a = b;
	b = t;
}

template <typename T> void reverse(T *a, int len) {
	for (int i = (len - 1) / 2; i >= 0; --i) {
		swap(a[i], a[len - i - 1]);
	}
}

int main() {
	char seq[22];
	scanf("%20s", seq);

	reverse(seq, (int)strnlen(seq, 22));

	puts(seq);
	return 0;
}
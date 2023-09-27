#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

void readCsv2(int *a, int *b) {
	char *buf = new char[512], *ptok;
	scanf("%511s", buf);
	if ((ptok = strtok(buf, ",")) != NULL) {
		*a = atoi(ptok);
		if ((ptok = strtok(NULL, ",")) != NULL) {
			*b = atoi(ptok);
		} else {
			b = 0;
		}
	} else {
		a = b = 0;
	}
	delete [] buf;
}

int main() {
	using namespace std;
	int w, n, a, b;
	vector<int> l;
	scanf("%d\n%d", &w, &n);
	for (int i = 1; i <= w; ++i) {
		l.push_back(i);
	}
	for (; n > 0; --n) {
		readCsv2(&a, &b);
		swap(l[a - 1], l[b - 1]);
	}
	for (vector<int>::iterator i = l.begin(); i != l.end(); ++i) {
		printf("%d\n", *i);
	}
	return 0;
}
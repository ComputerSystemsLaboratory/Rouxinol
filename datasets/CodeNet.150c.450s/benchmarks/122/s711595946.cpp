// Ref : https://book.mynavi.jp/ec/products/detail/id=35408

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define NMAX 2000000
int H[NMAX+1], N = 0;

void maxHeapify(int ix) {
	int p = ix, l = ix * 2, r = l + 1;
	if ((l <= N) && (H[l] > H[p])) p = l;
	if ((r <= N) && (H[r] > H[p])) p = r;
	if (p != ix) {
		swap(H[ix], H[p]);
		maxHeapify(p);
	}
}

void myInsert(int key) {
	N++;
	H[N] = key;
	int ix = N;
	while ((ix > 1) && (H[ix] > H[ix/2])) {
		swap(H[ix], H[ix/2]);
		ix = ix / 2;
	}
}

int myExtract() {
	int vmax = H[1];
	H[1] = H[N--];
	maxHeapify(1);
	return vmax;
}

int main(void) {
	char command[10];
	int key;
	while (1) {
		scanf("%s", &command); // 'end' or 'insert [key]' or 'extract'
		if (command[2] == 'd') break;
		else if (command[0] == 'i') {
			scanf("%d", &key);
			myInsert(key);
		}
		else printf("%d\n", myExtract());
	}
	return 0;
}

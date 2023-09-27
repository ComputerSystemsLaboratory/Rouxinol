#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int num = 2000000;
int a[num];
int h;
inline int pa(int i) { return i / 2; }
void maxHeapify(int i) {
	int l = i*2;
	int r = i*2+1;
	int lg;
	if (l <= h && a[i] < a[l])
		lg = l;
	else lg = i;
	if (r <= h && a[lg] < a[r])
		lg = r;
	if (lg != i) {
		swap(a[i], a[lg]);
		maxHeapify(lg);
	}
}
inline void insert(int k) {
	h++;
	a[h] = k;
	int i = h;
	while (i > 1 && a[i] > a[pa(i)]) {
		 swap(a[i], a[pa(i)]);
		i = pa(i);
	}
}
inline void extract(){
	printf("%d", a[1]);
	printf("\n");
	a[1] = a[h];
	h--;
	maxHeapify(1);
}
int main() {
	char com[10];
	int key;
	for (int i = 1; ; i++) {
		scanf("%s", &com);
		if (com[0] == 'i') {scanf("%d", &key); insert(key);}
		else if (com[1] == 'x') extract();
		else break;
	}
	return 0;
}
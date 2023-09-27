#include <cstdio>
#pragma warning(disable : 4996)
int Q, x, lc[500009], rc[500009], key[500009], cnt; char b[10];
void inorder(int pos) {
	if (lc[pos]) inorder(lc[pos]);
	printf(" %d", key[pos]);
	if (rc[pos]) inorder(rc[pos]);
}
void preorder(int pos) {
	printf(" %d", key[pos]);
	if (lc[pos]) preorder(lc[pos]);
	if (rc[pos]) preorder(rc[pos]);
}
int main() {
	scanf("%d", &Q);
	while (Q--) {
		scanf("%s", b);
		if (b[0] == 'i') {
			scanf("%d", &x);
			if (cnt == 0) key[cnt++] = x;
			else {
				int pos = 0;
				while (true) {
					if (x < key[pos]) {
						if (lc[pos]) pos = lc[pos];
						else {
							lc[pos] = cnt;
							key[cnt++] = x;
							break;
						}
					}
					else {
						if (rc[pos]) pos = rc[pos];
						else {
							rc[pos] = cnt;
							key[cnt++] = x;
							break;
						}
					}
				}
			}
		}
		else if (b[0] == 'f') {
			scanf("%d", &x);
			if (cnt == 0) puts("no");
			else {
				int pos = 0;
				while (key[pos] != x) {
					if (x < key[pos]) {
						if (lc[pos]) pos = lc[pos];
						else break;
					}
					else {
						if (rc[pos]) pos = rc[pos];
						else break;
					}
				}
				puts(x == key[pos] ? "yes" : "no");
			}
		}
		else {
			inorder(0); printf("\n");
			preorder(0); printf("\n");
		}
	}
	return 0;
}
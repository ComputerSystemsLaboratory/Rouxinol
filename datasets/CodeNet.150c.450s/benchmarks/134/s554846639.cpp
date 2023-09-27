#include <stdio.h>
int n, v, a[25][2], r; bool f[25];
void p1(int u) { if(!~u) return; printf(" %d", u), p1(a[u][0]), p1(a[u][1]); }
void p2(int u) { if(!~u) return; p2(a[u][0]), printf(" %d", u), p2(a[u][1]); }
void p3(int u) { if(!~u) return; p3(a[u][0]), p3(a[u][1]), printf(" %d", u); }
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &v), scanf("%d%d", a[v], a[v] + 1), f[a[v][0]] = f[a[v][1]] = true;
	for(int i = 0; i < n; i++) if(!f[i]) r = i;
	puts("Preorder"); p1(r); puts("");
	puts("Inorder"); p2(r); puts("");
	puts("Postorder"); p3(r); puts("");
}
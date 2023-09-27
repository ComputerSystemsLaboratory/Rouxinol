# include <cstdio>

static const int maxn = 10000000 + 10;

struct Chain {
	int v, L, R;
} chain[maxn];

int n, cnt;

void _deleteLast() {
	// if (chain[1].L == 0) return;
	int d = chain[chain[1].L].L;
	chain[d].R = 1;
	chain[1].L = d;
}

void _deleteFirst() {
	// if (chain[0].R == 1) return;
	int d = chain[chain[0].R].R;
	chain[d].L = 0;
	chain[0].R = d;
}

void _insert(int x) {
	// printf("insert\n");
	int d = chain[0].R;
	chain[0].R = cnt;
	chain[cnt].v = x;
	chain[cnt].L = 0;
	chain[cnt].R = d;
	chain[d].L = cnt;
	cnt++;
}

void _delete(int x) {
	// printf("delete\n");
	int p = chain[0].R;
	while (chain[p].v != x) {
		p = chain[p].R;
		if (p == 1) return; // 测试例中有delete不存在值的操作
	}
	int pl = chain[p].L;
	int pr = chain[p].R;
	chain[pl].R = pr;
	chain[pr].L = pl;
}

int main() {
	// freopen("data.in", "r", stdin);
	// freopen("data.out", "w", stdout);
	while (scanf("%d", &n) != EOF) {
		// 把chain[0]作为链头，把chain[1]作为链尾，cnt作为存储每一个链条
		chain[0].R = 1;
		chain[1].L = 0;
		cnt = 2;
		// cmd用来缓存命令
		char cmd[20];
		int x;
		for (int i = 0; i < n; i++) {
			scanf("%s", cmd);
			if (cmd[6] == '\0') {
				scanf("%d", &x);
				// printf("x is %d\n", x);
				if (cmd[0] == 'i')
					_insert(x);
				else
					_delete(x);
			} 
			else if (cmd[6] == 'F') {
				_deleteFirst();
			}
			else if (cmd[6] == 'L') {
				_deleteLast();
			}
		}
		int p = chain[0].R, first = 0;
		while (p != 1) {
			if (first != 0) {
				printf(" ");
			}
			printf("%d", chain[p].v);
			p = chain[p].R;
			first = 1;
		}
		printf("\n");
	}
	return 0;
}

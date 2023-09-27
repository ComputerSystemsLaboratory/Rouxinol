#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#include "dump.hpp"
#else
#define dump(...)
#endif

//#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9) + 7;
const double PI = acos(-1);
const double EPS = 1e-9;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
struct List {
	struct Node {
		int key;
		Node *next, *prev;
	};
	Node *top;
	void print_list() {
		for (Node *z = top->next; z != top; z = z->next) {
			if (z != top->next)putchar(' ');
			printf("%d", z->key);
		}
		puts("");
	}
	List() {
		top = (Node*)malloc(sizeof(Node));
		top->next = top->prev = top;
	}
	void insert(int x) {
		Node *node = (Node*)malloc(sizeof(Node));
		node->key = x;
		node->next = top->next;
		top->next->prev = node;
		top->next = node;
		node->prev = top;
	}
	void deleteFirst() {
		Node *d = top->next;
		top->next = top->next->next;
		top->next->prev = top;
		free(d);
	}
	void deleteLast() {
		Node *d = top->prev;
		top->prev = top->prev->prev;
		top->prev->next = top;
		free(d);
	}
	void Delete(int x) {
		Node *z;
		for (z = top->next; z != top&&z->key != x; z = z->next);
		if (z != top&&z->key == x) {
			z->prev->next = z->next;
			z->next->prev = z->prev;
			free(z);
		}
	}


};
signed main() {

	List ls;
	int n; cin >> n;
	char order[20];
	int x;
	rep(i, 0, n) {
		scanf("%s", order);
		if (order[0] == 'i') {
			scanf("%d", &x);
			ls.insert(x);
		}
		else if (strcmp(order, "delete") == 0) {
			scanf("%d", &x);
			ls.Delete(x);
		}
		else if (order[6] == 'F')ls.deleteFirst();
		else ls.deleteLast();
	}
	ls.print_list();
	return 0;
}
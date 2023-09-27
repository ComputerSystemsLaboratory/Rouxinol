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
template<typename T>
struct List {
	struct Node {
		T key;
		Node *prev, *next;
		Node() {}
		Node(T key, Node *prev, Node *next) :key(key), prev(prev), next(next) {}
	};
	Node *top;
	List() {
		top = (Node*)malloc(sizeof(Node));
		top->prev = top->next = top;
	}
	void printlist() {
		for (Node *a = top->next; a != top; a = a->next) {
			if (a != top->next)cout << ' ';
			cout << a->key;
		}
		cout << endl;
	}
	void insert(T x) {
		Node *i = new Node;
		i->prev = top;
		i->next = top->next;
		i->key = x;
		top->next->prev = i;
		top->next = i;
	}
	Node* findkey(T x) {
		Node *ret;
		for (ret = top->next; !(ret == top || ret->key == x); ret = ret->next);
		return ret;
	}
	void deletepointer(Node *f) {
		if (f == top)return;
		f->prev->next = f->next;
		f->next->prev = f->prev;
		delete f;
	}
	void deletex(T x) {
		deletepointer(findkey(x));
	}
	void deletefirst() {
		deletepointer(top->next);
	}
	void deletelast() {
		deletepointer(top->prev);
	}
};

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	List<int>lis;
	int N; cin >> N;
	rep(i, 0, N) {
		string com; cin >> com;
		if (com == "insert") {
			int x; cin >> x;
			lis.insert(x);
		}
		else if (com == "delete") {
			int x; cin >> x;
			lis.deletex(x);
		}
		else if (com == "deleteFirst") {
			lis.deletefirst();
		}
		else lis.deletelast();
	}
	lis.printlist();
	return 0;
}
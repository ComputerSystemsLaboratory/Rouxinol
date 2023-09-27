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
struct Node {
	T key;
	Node *next, *prev;
	Node() {}
};
template<typename T>
struct List {

	Node<T> *p;
	List() {
		p = (Node<T>*)malloc(sizeof(Node<T>));
		p->next = p->prev = p;
	}
	void insert(T x) {
		Node<T> *a = (Node<T>*)malloc(sizeof(Node<T>));
		a->key = x;
		a->next = p->next;
		p->next->prev = a;
		a->prev = p;
		p->next = a;
	}
	Node<T>* findkey(T x) {
		Node<T> *c;
		for (c = p->next; c->key != x&&c != p; c = c->next);
		return c;
	}
	void deletepointer(Node<T> *d) {
		if (d == p)return;
		d->prev->next = d->next;
		d->next->prev = d->prev;
		free(d);
	}
	void deletekey(T x) {
		deletepointer(findkey(x));
	}
	void deleteFirst() {
		deletepointer(p->next);
	}
	void deleteLast() {
		deletepointer(p->prev);
	}
	void print() {
		for (Node<T> *a = p->next; a != p; a = a->next) {
			cout << a->key << (a == p->prev ? '\n' : ' ');
		}
	}
};
signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	List<int> ls;
	int N; cin >> N;
	rep(i, 0, N) {
		string s; cin >> s;
		if (s[0] == 'i') {
			int x; cin >> x;
			ls.insert(x);
		}
		else if (s == "deleteFirst")ls.deleteFirst();
		else if (s == "deleteLast")ls.deleteLast();
		else {
			int x; cin >> x;
			ls.deletekey(x);
		}

	}
	ls.print();
	return 0;
}
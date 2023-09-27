#include <bits/stdc++.h>

#define rep(i, first, to) for(ll i = first; i < to; ++i)

using namespace :: std;
typedef long long ll;

struct Node {
	int key;
	Node *prev, *next;
};
Node *first;
Node *back;

void init() {
	first = new Node();
	back = first;
	first->next = new Node();
	first->next->prev = first;
	first = first->next;
}
bool isEmpty() {
	return back == first->prev;
}
	
void insert(int x) {
	first->key = x;
	first->next = new Node();
	first->next->prev = first;
	first = first->next;
}
void deleteValue(int x) {
	Node *now = first->prev;
	while(!(now == back)) {
		//cout << "(" << now->key << ", " << x << ")" << endl;
		if(now->key == x) {
			now->prev->next = now->next;
			now->next->prev = now->prev;
			delete now;
			break;
		}
		now = now->prev;
	}
}
int deleteFirst() {
	int v = first->prev->key;
	deleteValue(v);
	return v;
}
int deleteLast() {
	int v = back->next->key;
	Node *n = back->next;
	back->next = back->next->next;
	back->next->prev = back;
	delete n;
	return v;
}
void solve() {
	init();
	int n;
	cin >> n;
	string s;
	int v;
	rep(i, 0, n) {
		//cout << i << endl;
		cin >> s;
		if (s == "deleteFirst") {
			deleteFirst();
		} else if (s == "deleteLast") {
			deleteLast();
		} else {
			cin >> v;
			if (s == "insert") {
				insert(v);
				//cout << "insert : " << v << endl;
			} else if (s == "delete") {
				deleteValue(v);
			}
		}
	}
	if (!isEmpty()) {
		cout << deleteFirst();
	}
	while(!isEmpty()) {
		cout << " " << deleteFirst();
	}
	cout << endl;
}

int main() {
	solve();
	return 0;
}
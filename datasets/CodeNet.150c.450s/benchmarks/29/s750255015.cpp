#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;


class dlink {
public:
	dlink(int k) : prev(NULL), next(NULL), key(k) {}

	dlink *prev;
	dlink *next;
	int key;
};

class list {
public:
	list() : head(NULL), tail(NULL) {}

	dlink *head;
	dlink *tail;

	void ins(int k) {
		dlink *d = new dlink(k);
		if (head) {
			head->prev = d;
			d->next = head;
		} else {
			d->prev = NULL;
			d->next = NULL;
			tail = d;
		}
		head = d;
	}
	void del(int k) {
		dlink *d = head;
		while (d) {
			if (d->key == k) {
				dlink *p = d->prev;
				dlink *n = d->next;
				if (p) p->next = n;
				if (n) n->prev = p;
				if (d == head) head = d->next;
				if (d == tail) tail = d->prev;
				delete d;
				break;
			}
			d = d->next;
		}
	}
	void delFirst() {
		dlink *d = head;
		if (d) {
			head = head->next;
			if (head) {
				head->prev = NULL;
			} else {
				tail = NULL;
			}
			delete d;
		}
	}
	void delLast() {
		dlink *d = tail;
		if (d) {
			tail = tail->prev;
			if (tail) {
				tail->next = NULL;
			} else {
				head = NULL;
			}
			delete d;
		}
	}
};

int main() {
	int n;
	cin >> n;
	list lst;
	char cmd[20];
	int m;
	for (int i = 0; i < n; i++) {
		scanf("%s", cmd);
		if (strcmp(cmd, "insert") == 0) {
			scanf("%d", &m);
			lst.ins(m);
		} else if (strcmp(cmd, "delete") == 0) {
			scanf("%d", &m);
			lst.del(m);
		} else if (strcmp(cmd, "deleteFirst") == 0) {
			lst.delFirst();
		} else if (strcmp(cmd, "deleteLast") == 0) {
			lst.delLast();
		}
	}

	dlink *p = lst.head;
	while (p != NULL) {
		if (p != lst.head) {
			cout << " ";
		}
		cout << p->key;
		p = p->next;
	}
	cout << endl;
}
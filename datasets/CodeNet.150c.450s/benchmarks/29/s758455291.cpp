#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <string.h>
#include <cmath>


const int MAXN = 100;
int n;

struct DLNode {
	int x;
	struct DLNode* next;
	struct DLNode* pre;

	DLNode() {
	}

	DLNode(int x) : x(x) {
	}
};

DLNode head;

void init() {
	head.next = head.pre = &head;
}

bool is_empty() {
	return head.pre == head.next && head.pre == (&head);
}

void delete_first() {
	if (is_empty()) {
		return;
	}
	DLNode* tmp = head.next;
	tmp->next->pre = &head;
	tmp->pre->next = tmp->next;
	delete tmp;
}

void delete_last() {
	if (is_empty()) return;
	DLNode* tmp = head.pre;
	tmp->pre->next = &head;
	head.pre = tmp->pre;
	delete tmp;
}

void insert(int x) {
	DLNode* t = new DLNode(x);
	t->pre = &head;
	t->next = head.next;
	t->next->pre = t;
	t->pre->next = t;
}

void deletex(int x) {
	if (is_empty()) return;
	DLNode* first = &head;
	DLNode* cur = head.next;
	while (cur != &head) {
		if (cur->x == x) {
			break;
		}
		first = cur;
		cur = cur->next;
	}
	if (cur != &head) {
		first->next = cur->next;
		cur->next->pre = first;
		delete cur;
	}
}

int getx() {
	int x;
	scanf("%d", &x);
	return x;
}

void input() {
	scanf("%d", &n);
	char s[20];
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (strcmp(s, "insert") == 0) {
			insert(getx());
		}
		else if (strcmp(s, "delete") == 0) {
			deletex(getx());
		}
		else if (strcmp(s, "deleteFirst") == 0) {
			delete_first();
		}
		else {
			delete_last();
		}
	}
}

void output() {
	DLNode* cur = head.next;
	while (cur != &head) {
		if (cur != head.next) {
			printf(" ");
		}
		printf("%d", cur->x);
		cur = cur->next;
	}
	puts("");
}

int main() {
	init();
	input();
	output();
	return 0;
}

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

struct Node {
	int key;
	Node *prev, *next;
};

Node *nil;

void init() {
	nil = (Node *) malloc (sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}

void insert(int key) {
	Node *x = (Node *) malloc (sizeof(Node));
	x->key = key;
	x->next = nil->next;
	x->prev = nil;
	nil->next->prev = x;
	nil->next = x;
}

Node * listSearch(int key) {
	Node *cur = nil->next;
	while (cur != nil && cur->key != key) {
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node *t) {
	if (t == nil) return;
	t->prev->next = t->next;
	t->next->prev = t->prev;
	free(t);
}

void deleteKey(int key) {
	deleteNode(listSearch(key));
}

void deleteFirst() {
	deleteNode(nil->next);
}

void deleteLast() {
	deleteNode(nil->prev);
}

void printList() {
	Node *cur = nil->next;
	int isFirst = 1;
	while (cur != nil) {
		if (!isFirst) {
			printf(" ");
		}
		isFirst = 0;
		printf("%d", cur->key);
		cur = cur->next;
	}
	printf("\n");
}

int main() {
	int n, key;
	int size = 0;
	char com[20];
	int np = 0, nd = 0;
	scanf("%d", &n);

	init();

	for (int i = 0; i < n; i++) {
		scanf("%s", com);
		if (com[0] == 'i') {
			scanf("%d", &key);
			insert(key);
			size++;
			np++;
		} else if (com[0] == 'd') {
			if (com[6] == 'F') {
				deleteFirst();
			} else if (com[6] == 'L') {
				deleteLast();
			} else {
				scanf("%d", &key);
				deleteKey(key);
				nd++;
			}
			size--;
		}
	}

	printList();

	return 0;
}
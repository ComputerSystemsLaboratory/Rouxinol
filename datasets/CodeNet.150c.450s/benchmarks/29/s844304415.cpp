#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include <cstring>
using namespace std;
struct Node {
	int key;
	Node* pre;
	Node* next;
};
Node* nil;
void init() {
	nil = new Node;
	nil->pre = nil;
	nil->next = nil;
}
void insert(int x) {
	Node* add = new Node;
	add->key = x;
	add->next = nil->next;
	nil->next->pre = add;
	nil->next = add;
	add->pre = nil;
	add->next;
}
void deleteNode(Node* d) {
	if (d == nil)return;
	Node* p = d->pre;
	Node* n = d->next;
	p->next = n;
	n->pre = p;
	free(d);
}
void deleteOne(int x) {
	Node* i = nil->next;
	while (i!=nil&&i->key != x)
		i = i->next;
	deleteNode(i);
}
void deleteFirst() {
	deleteNode(nil->next);
}
void deleteLast() {
	deleteNode(nil->pre);
}
int main() {
	init();
	int len;
	cin >> len;
	for (int i = 0; i < len; i++) {
		char op[20];
		int x;
		scanf("%s", op);
		if (op[0] == 'i') {
			scanf("%d", &x);
			insert(x);
		}
		else if (op[0] == 'd') {
			if (strlen(op) <= 6) {
				scanf("%d", &x);
				deleteOne(x);
			}
			else if (op[6] == 'F')
				deleteFirst();
			else
				deleteLast();
		}
	}
	Node* item = nil->next;
	while (nil->pre != item) {
		printf("%d ", item->key);
		item = item->next ;
	}
	printf("%d\n", item->key);
	return 0;
}

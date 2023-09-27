#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
class Node {
public:
	int key;
	Node *prev, *next;
};
Node *nil;
Node* listSearch(int key) {
	Node *cur = nil->next;
	while (cur != nil&&cur->key != key) {
		cur = cur->next;
	}
	return cur;
}
void init() {
	nil = (Node *)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}
void printList() {
	Node *cur = nil->next;
	int isf = 0;
	while (true) {
		if (cur == nil)break;
		if (isf++ > 0)printf(" ");
		printf("%d", cur->key);
		cur = cur->next;
	}
	printf("\n");
}
void deleteNode(Node *t) {
	if (t == nil)return;
	t->prev->next = t->next;
	t->next->prev = t->prev;
	free(t);
}
void deleteFirst() {
	deleteNode(nil->next);
}
void deleteLast() {
	deleteNode(nil->prev);
}
void deleteKey(int key) {
	deleteNode(listSearch(key));
}
void insert(int key) {
	Node *x = (Node *)malloc(sizeof(Node));
	x->key = key;
	x->prev = nil;
	x->next = nil->next;
	nil->next->prev = x;
	nil->next = x;
}
int main() {
	init();
	int n, key;
	char com[20];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s%d", com, &key);
		if (com[0] == 'i') {
			insert(key);
		}
		else if (com[0] == 'd') {
			if (strlen(com) > 6) {
				if (com[6] == 'F')deleteFirst();
				else if (com[6] == 'L')deleteLast();
			}
			else {
				deleteKey(key);
			}
		}
		
	}
	printList();
	return 0;
}
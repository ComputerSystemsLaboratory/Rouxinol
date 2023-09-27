#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#define BIG 1000000000
#define BIGNUM 100000
#define SIZE 1000
using namespace std;

struct Node {
	int key;
	Node *prev, *next;
};

Node*nil;

void init() {
	nil = (Node*)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}


void insert(int key) {
	Node *x = (Node*)malloc(sizeof(Node));
	x->key = key;
	x->next = nil->next;
	nil->next->prev = x;
	nil->next = x;
	x->prev = nil;
}

Node* listSearch(int key) {
	Node *cur = nil->next;
	while (cur != nil && cur->key != key) cur = cur->next;
	return cur;
}

void deleteNode(Node *t) {
	if (t == nil) {
		return;
	}
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

void show() {
	Node *cur = nil->next;
	while (cur != nil) {
		cout << cur->key;
		if (cur->next != nil) cout << ' ';
		cur = cur->next;
	}
	cout << "\n";
}

int main() {
	int n;
	int x;
	char cmd[15];
	scanf("%d",&n);
	init();
	for (int i = 0; i < n; i++){
		scanf("%s%d", cmd, &x);
		if (cmd[0] == 'i') {
			insert(x);
		}
		else if (cmd[0]=='d' && strlen(cmd)<=6) {
			deleteKey(x);
		}
		else if (cmd[6]=='F') {
			deleteFirst();
		}
		else if (cmd[6]=='L') {
			deleteLast();
		}
		else {
			cout << "Error\n";
			exit(1);
		}
	}
	show();
	return 0;
}
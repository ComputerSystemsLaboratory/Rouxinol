#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <list>
using namespace std;

struct Node { int key; Node *next, *prev; };
Node *nil;

void init() {
	nil = (Node *)malloc(sizeof(Node));
	nil->next = nil, nil->prev = nil;
}
Node *searchKey(int key) {
	Node *x = nil->next;
	while (x->key != key && x != nil)x = x->next;
	return x;
}

void printlist() {
	Node *cur = nil->next;
	for (int i = 0; cur != nil;i++) {
		if (i)cout << " ";
		cout << cur->key;
		cur = cur->next;
	}
	cout << endl;
}

void popback(int key){
	Node *x = (Node *)malloc(sizeof(Node));
	nil->prev->next = x;
	x->prev = nil->prev;
	x->next = nil;
	nil->prev = x;
	x->key = key;
}

void popfront(int key) {
	Node *x = (Node *)malloc(sizeof(Node));
	nil->next->prev = x;
	x->next = nil->next;
	x->prev = nil;
	nil->next = x;
	//if (nil->prev = nil)nil->prev = x;
	x->key = key;
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
	deleteNode(searchKey(key));
}

void print(list<int> x) {
	list<int>::iterator it = x.begin();
	while (it != x.end()) {
		cout << *(it++);
	}
}

int main() {
	init();
	int n, x;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s[0] == 'i')cin >> x, popfront(x);
		if (s == "delete")cin >> x, deleteKey(x);
		if (s == "deleteFirst")deleteFirst();
		if (s == "deleteLast")deleteLast();
	}
	printlist();
	return 0;
}
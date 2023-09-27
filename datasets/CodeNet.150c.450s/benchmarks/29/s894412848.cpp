#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct Node {
	int key;
	Node *prev, *next;
};

Node* nil;

void initialize() {
	nil = new Node;
	nil->next = nil;
	nil->prev = nil;
}

void insert(int key) {
	Node* n = new Node;
	n->key = key;

	n->next = nil->next;
	n->prev = nil;
	n->next->prev = n;
	nil->next = n;
}

Node* listSearch(int key) {
	Node* cur = nil->next;
	while (cur != nil && cur->key != key) {
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node *t) {
	if (t == nil) return;
	t->prev->next = t->next;
	t->next->prev = t->prev;
	delete t;
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

void print() {
	Node* cur = nil->next;
	int i = 1;
	while (cur != nil) {
		cout << i++ << "th node's key : " << cur->key << endl;
		cur = cur->next;
	}
}

void printList() {
	Node* cur = nil->next;
	if (cur != nil) {
		cout << cur->key;
		cur = cur->next;
	}
	while (cur != nil) {
		cout << ' ' << cur->key;
		cur = cur->next;
	}
	cout << endl;
}

int main() {
	int n, key;
	char command[20];

	initialize();

	cin >> n;

	for (int i = 0; i < n; i++) {
		scanf("%s%d", command, &key);
		//cout << command << ' ' << key << endl;
		if (command[0] == 'i') insert(key);
		else if (command[0] == 'd') {
			if (strlen(command) > 6) {
				if (command[6] == 'F') deleteFirst();
				else if (command[6] == 'L') deleteLast();
			}
			else deleteKey(key);
		}
	}
	printList();
	return 0;
}
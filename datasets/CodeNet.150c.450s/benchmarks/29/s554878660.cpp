#include<cstdio>
#include<cstdlib>
#include<cstring>

struct Node {
	int key;
	Node *next, *prev;
};

Node *nil;

void init() {
	nil = (Node *)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}

void deleteNode(Node *n) {
	if (n == nil) return;
	n->prev->next = n->next;
	n->next->prev = n->prev;
	free(n);
}

void deleteFirst() {
	deleteNode(nil->next);
}

void deleteLast() {
	deleteNode(nil->prev);
}

Node *searchNode(int key) {
	Node *n;
	for (n = nil->next; n != nil; n = n->next) {
		if (n->key == key) {
			break;
		}
	}
	return n;
}

void deleteKey(int key) {
	deleteNode(searchNode(key));
}

void insert(int key) {
	Node *newNode = (Node *)malloc(sizeof(Node));

	newNode->key = key;

	nil->next->prev = newNode;
	newNode->next = nil->next;
	nil->next = newNode;
	newNode->prev = nil;
}

void printList() {
	bool isf = true;
	for (Node *n = nil->next;n != nil; n = n->next) {
		if (isf) {
			isf = false;
		}
		else {
			printf(" ");
		}
		printf("%d", n->key);
	}
	printf("\n");
}

int main() {
	int key, n, i;
	int size = 0;
	char com[30];
	scanf("%d", &n);
	init();

	for (i = 0; i < n; i++) {
		scanf("%s", com);
		if (com[0] == 'i') {
			scanf("%d", &key);
			insert(key);
		}
		else if (com[0] == 'd') {
			if (strlen(com) > 6) {
				if (com[6] == 'F') deleteFirst();
				else if (com[6] == 'L') deleteLast();
			}
			else {
				scanf("%d", &key);
				deleteKey(key);
			}
		}
	}
	printList();
	return 0;
}

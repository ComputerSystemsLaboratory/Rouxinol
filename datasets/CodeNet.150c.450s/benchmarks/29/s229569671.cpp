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

void deleteFirst() {
	if (nil->next == nil) return;
	Node *delNode = nil->next;
	nil->next = delNode->next;
	delNode->next->prev = nil;
	free(delNode);
}

void deleteLast() {
	if (nil->prev == nil) return;
	Node *delNode = nil->prev;
	nil->prev = delNode->prev;
	delNode->prev->next = nil;
	free(delNode);
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
	Node *delNode = searchNode(key);
	if (delNode == nil) return;
	delNode->prev->next = delNode->next;
	delNode->next->prev = delNode->prev;
	free(delNode);
}

void insert(int key) {
	Node *newNode = (Node *)malloc(sizeof(Node));

	newNode->key = key;

	if (nil->prev == nil) {
		nil->prev = newNode;
	}
	else {
		nil->next->prev = newNode;
	}
		
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

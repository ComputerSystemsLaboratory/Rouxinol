#include<cstdio>
#include<cstdlib>
#include<cstring>

struct Node {
	int key;
	Node *prev, *next;
};

Node *nil;

void init() {
	nil = (Node *)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}

void printList() {
	Node *cur = nil->next;
	int i = 0;
	while(cur != nil) {
		if (i++ > 0) printf(" ");
		printf("%d", cur->key);
		cur = cur->next;
	}
	printf("\n");
}

Node* listSearch(int key) {
	Node *cur = nil->next;
	while(cur != nil && cur->key != key) {
		cur = cur->next;
	}
	return cur;
}

void insert(int key) {
	Node *x = (Node *)malloc(sizeof(Node));
	x->key = key;
	x->next = nil->next;
	x->prev = nil;
	nil->next->prev = x;
	nil->next = x;
}

void deleteNode(Node *t) {
	if (t == nil) return;
	t->next->prev = t->prev;
	t->prev->next = t->next;
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


int main() {
	int key, n;
	int size = 0;
	scanf("%d", &n);
	char cmd[20];
	init();
	for (int i = 0; i < n; i++) {
		scanf("%s%d", cmd, &key);
		if (cmd[0] == 'i') {
			insert(key);
		} else if (cmd[0] == 'd') {
			if (strlen(cmd) > 6) {
				if (cmd[6] == 'F') {
					deleteFirst();
				} else {
					deleteLast();
				}
			} else {
				deleteKey(key);
			}
		}
	}
	printList();

	return 0;
}
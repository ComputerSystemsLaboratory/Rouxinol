#define  _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

typedef struct Node
{
	Node *prev, *next;
	int key;
} Node, *ptrNode;

ptrNode nil;	// sential

void init() {
	nil = (ptrNode)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}

// insert elem into head
void insert(int key) {
	ptrNode n = (ptrNode)malloc(sizeof(Node));
	n->key = key;

	// insert
	n->next = nil->next;
	nil->next->prev = n;
	nil->next = n;
	n->prev = nil;
}

ptrNode find(int key) {
	ptrNode it = nil->next;
	while (it != nil) {
		if (it->key == key)
			return it;
		it = it->next;
	}
	return NULL;
}

void delKey(int key) {
	ptrNode n;
	// find key
	if ((n = find(key)) != NULL) {
		(n->prev)->next = n->next;
		(n->next)->prev = n->prev;
		free(n);
	}
}

void delNode(ptrNode cur) {
	if (cur == nil)	return;
	(cur->prev)->next = cur->next;
	(cur->next)->prev = cur->prev;
	free(cur);
}

void delFirst() {
	delNode(nil->next);
}

void delLast() {
	delNode(nil->prev);
}

void printList() {
	int isf = 0;
	ptrNode it = nil->next;
	while (it != nil) {
		if (isf++ > 0)	printf(" ");
		printf("%d", it->key);
		it = it->next;
	}
	printf("\n");
}

int main()
{
	init();
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char cmd[12];
		scanf("%s", cmd);

		if (cmd[0] == 'i') {
			int key;
			scanf("%d", &key);
			insert(key);
		} else {
			if (cmd[6] == '\0') {
				int key;
				scanf("%d", &key);
				delKey(key);
			}
			else if (cmd[6] == 'F')
				delFirst();
			else
				delLast();
		}
	}

	printList();

	return 0;
}
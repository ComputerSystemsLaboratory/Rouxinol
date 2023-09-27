#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

typedef struct node{
	int data;
	struct node *pre, *next;
}Node;

Node *head;

void init()
{
	head = (Node*)malloc(sizeof(Node));
	head->next = head;
	head->pre = head;
}

void insert(int key)
{
	Node *x = (Node*)malloc(sizeof(Node));
	x->data = key;
	Node *p = head->next;
	x->next = p;
	p->pre = x;
	head->next = x;
	x->pre = head;
}

Node* listSearch(int key){
	Node *cur = head->next;
	while (cur != head && cur->data != key) {
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node *t){
	if (t == head) {
		return;
	}
	t->pre->next = t->next;
	t->next->pre = t->pre;
	free(t);
}

void deleteFirst()
{
	deleteNode(head->next);
}

void deleteLast()
{
	deleteNode(head->pre);
}

void deleteKey(int key)
{
	deleteNode(listSearch(key));
}

void printLast(){
	Node* cur = head->next;
	int isf = 0;
	while (1) {
		if (cur == head) {
			break;
		}
		if (isf++ > 0) {
			printf(" ");
		}
		printf("%d", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


int main(int argc, char *argv[]) {
	int key, n, i;
	int size = 0;
	char com[20];
	int np = 0, nd = 0;
	scanf("%d", &n);
	init();
	for (i = 0; i < n; i++) {
		scanf("%s %d", com, &key);
		if (com[0] == 'i') {
			insert(key);
			np++;
			size++;
		}else if (com[0] == 'd') {
			if (strlen(com) > 6) {
				if (com[6] == 'F') {
					deleteFirst();
				}
				else if (com[6] == 'L') {
					deleteLast();
				}
			}else {
				deleteKey(key);
				nd++;

			}
			size--;
		}
	}
	printLast();
	return 0;	
}

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
using namespace std;
const int INF = 0x3f3f3f3f;

struct Node{
	int key;
	Node *prev, *next;
};

Node *nil;

void init() {
	nil = (Node *)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}

void insert(int key) {
	Node *x = (Node *)malloc(sizeof(Node));
	x->key = key;
	x->next = nil->next;
	nil->next->prev = x;
	nil->next = x;
	x->prev = nil;
}

Node* listSearch(int key) {
	Node *cur = nil->next;
	while( cur != nil && cur->key != key) {
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node *t) {
	if ( t == nil) return;
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

void deleteKey(int Key) {
	deleteNode(listSearch(Key));
}
int main(){
	int n, temp;
	char s[15];
	scanf("%d", &n);
	init();
	for(int i = 0; i < n; i ++)
	{
		scanf("%s", s);
		if(!strcmp(s, "insert"))
		{
			cin >> temp;
			insert(temp);
		}
		else if(!strcmp(s, "delete"))
		{
			cin >> temp;
			deleteKey(temp);
		}
		else if(!strcmp(s, "deleteFirst"))
			deleteFirst();
		else
			deleteLast();
	}
	Node *node = nil->next;
	while(node != nil)
	{
		printf("%d", node->key);
		if(node->next != nil)
			printf(" ");
		node = node->next;
	}
	printf("\n");
	return 0;
}
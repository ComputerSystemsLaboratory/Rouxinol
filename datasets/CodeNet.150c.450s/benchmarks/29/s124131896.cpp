#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>

using namespace std;

struct Node {
	int key;
	Node *bef, *next;
};

Node *nil;

Node* listSearch(int key){
	Node *cur = nil->next;
	while( cur != nil && cur->key != key){
		cur = cur->next;
	}
	return cur;
}

void init(){
	nil = (Node *)malloc(sizeof(Node));
	nil->bef = nil;
	nil->next = nil;
}
void printList(){
	Node *cur = nil->next;
	int isf = 0;
	while(1){
		if(cur == nil) break;
		if(isf++ > 0) printf(" ");
		printf("%d", cur->key);
		cur = cur->next;
	}
	printf("\n");
}
void deleteNode(Node *t){
	if(t == nil) return;
	t->bef->next = t->next;
	t->next->bef = t->bef;
	free(t);
}
void deleteFirst(){
	deleteNode(nil->next);
}
void deleteLast(){
	deleteNode(nil->bef);
}
void deleteKey(int key){
	deleteNode( listSearch(key));
}
void insert(int key){
	Node *x = (Node *) malloc(sizeof(Node));
	x->key = key;
	x->next = nil->next;
	nil->next->bef = x;
	nil->next = x;
	x->bef = nil;
}

int main(){
	char c[200];
	int n;
	init();
	scanf("%d", &n);
	for(int _=0;_<n;_++){
		int res = scanf(" %s", c);
		if(res == EOF) break;
		if(strcmp(c, "insert")==0){
			int d;
			scanf(" %d",&d);
			insert(d);
		} else if(strcmp(c, "delete")==0){
			int d;
			scanf("%d",&d);
			deleteKey(d);
		} else if(strcmp(c, "deleteFirst")==0){
			deleteFirst();
		} else if(strcmp(c, "deleteLast")==0){
			deleteLast();
		}
	}
	printList();
	return 0;
}
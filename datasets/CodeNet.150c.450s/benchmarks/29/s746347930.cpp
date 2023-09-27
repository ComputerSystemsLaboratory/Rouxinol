#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
struct node {
	int key;
	node *pre, *nex;
};
node *nil;
void init() {
	nil = (node *)malloc(sizeof(node));
	nil->nex = nil;
	nil->pre = nil;
}
void insert(int key) {
	node *a = (node*)malloc(sizeof(node));
	a ->key = key;
	a->nex = nil->nex;
	nil->nex->pre = a;
	nil->nex = a;
	a->pre = nil;
}
node* search(int key) {
	node *cur;
	cur = nil->nex;
	while (cur != nil && cur->key != key) {
		cur = cur->nex;
	}
	return cur;
}
void deletenode(node *pt) {
	if (pt != nil) {
		pt->nex->pre = pt->pre;
		pt->pre->nex = pt->nex;
		free(pt);
	}
	else return;
	
}
void deleteFirst() {
	deletenode(nil->nex);
}
void deleteLast() {
	deletenode(nil->pre);
}
void deletekey(int key) {
	deletenode(search(key));
}
void printNode() {
	node *cur = nil->nex;
	/*while (cur != nil) {
		printf("%d", cur->key);
		cur = cur->nex;
	}*/
	int i = 0;
	while (1) {
		if(cur == nil)break;
		if (i++ > 0) printf(" ");
		printf("%d", cur->key);
		cur = cur->nex;
	}
	printf("\n");
}
int main() {
	
	int n, key;
	char com[20];
	scanf("%d", &n);
	init();
	for (int i = 0; i < n; i++) {
		scanf("%s%d", com, &key);
		if (com[0] == 'i') {
			insert(key);
		}
		else if (com[6] == 'F') {
			deleteFirst();
		}
		else if (com[6] == 'L') {
			deleteLast();
		}
		else {
			deletekey(key);
		}
		
				

			}
		
	
		printNode();
		return 0;
}
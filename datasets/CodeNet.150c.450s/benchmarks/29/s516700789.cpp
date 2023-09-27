#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
struct node{
	int key;
	node *pre, *next;
};
node *nil;
void init(){
	nil = (node *) malloc(sizeof(node));
	nil->pre = nil;
	nil->next = nil;
}
void insert(int k){
	node *x = (node *)malloc(sizeof(node));
	x->key = k;
	x->next = nil->next;
	nil->next->pre = x;
	nil->next = x;
	x->pre = nil;
}

node* searchList(int k){
	node *p = nil->next;
	while(p != nil && p->key != k){
		p = p->next;
	}
	return p;
}
void deleteNode(node *t){
	if(t == nil) return;
	t->pre->next = t->next;
	t->next->pre = t->pre;
	free(t);
}
void deleteKey(int key){
	deleteNode(searchList(key));
}
void deleteFirst(){
	deleteNode(nil->next);
}
void deleteLast(){
	deleteNode(nil->pre);
}
void printList(){
	node *p = nil->next;
	int sf = 0;
	while(p != nil){
		if(sf++ > 0) printf(" ");
		printf("%d", p->key);
		p = p->next;
	}
	printf("\n");
}
int main() {
	init();
	int n;
	scanf("%d", &n);
	char s[20];
	int key;
	for(int i=0; i<n; i++){
		scanf("%s%d", s, &key);
		if(s[0] == 'd'){
			if(strlen(s) > 6){
				if(s[6] == 'F'){
					deleteFirst();
				}else if(s[6] == 'L'){
					deleteLast();
				}
			}else {
				deleteKey(key);
			}
		}else if(s[0] == 'i'){
			insert(key);
		}
	}
	printList();
	return 0;	
}
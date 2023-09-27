#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;


struct Node{
	int key;
	Node *next,*prev;
};

Node *nil;

void init(){
	nil = (Node*)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}

void insert(int key){
	Node *x = (Node*)malloc(sizeof(Node));
	x->key=key;
	x->next = nil->next;
	nil->next->prev =x;
	nil->next=x;
	x->prev=nil;
}

Node* listSearch(int key){
	Node *cur = nil->next;
	while(cur->key!=key&&cur!=nil){
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node* t){
	if(t==nil) return;
	t->prev->next=t->next;
	t->next->prev=t->prev;
	free(t);
}

void deleteFirst(){
	deleteNode(nil->next);
}

void deleteLast(){
	deleteNode(nil->prev);
}

void deleteKey(int key){
	deleteNode(listSearch(key));
}

void printList(){
	Node *cur = nil->next;
	int isf=0;
	while(1){
		if(cur==nil) break;
		if(isf++>0) printf(" ");
		printf("%d",cur->key);
		cur=cur->next;
	}
	printf("\n");
}

int main(){
	int key=0,n,np=0,size=0,nd=0;
	char c[20];
	init();
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s %d",c,&key);
		if(c[0]=='i'){
			insert(key);
			np++;
			size++;
		}else if(c[0]=='d'){
			if(c[6]=='F'){
				deleteFirst();
			}else if(c[6]=='L'){
				deleteLast();
			} else{
				deleteKey(key);
				nd++;
			}
			size--;
		}
	}
	printList();
	return 0;
}
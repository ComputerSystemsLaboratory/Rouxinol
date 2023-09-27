#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <string>
#include <vector>
#include <limits.h>
#include <stack>
#include <queue>
#include<cstdlib>
#define maxn 10000000
#define pi acos(-1)
using namespace std;
struct node{
	unsigned int key;
	struct node *next;
	struct node *prev;
};

typedef struct node * NodePointer;

NodePointer nil;

NodePointer listSearch(int key){//在双向链表中搜索元素；
	node *cur = nil->next;//从头节点后面的元素开始访问；
	while (cur!=nil&&cur->key!=key) {
		cur=cur->next;
	}
	return cur;
}

void init(){//初始化双向链表；
	nil =(node*) malloc(sizeof(struct node));
	nil->next = nil;
	nil->prev = nil;
}

void printList(){
	NodePointer cur = nil->next;
	int isf = 0;
	while(1){
		if ( cur == nil ) break;
		if ( isf++ > 0)  printf(" ");
		printf("%d", cur->key);
		cur = cur->next;
	}
	printf("\n");
}

//从双向链表中删除元素；
void deleteNode(NodePointer t){
	if(t==nil)return;//t为结头时不做处理
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

void deleteKey(int key){//删除搜索到的结点；
	deleteNode(listSearch(key));
}



void insert(int key){//往双向链表中插入元素；
	NodePointer x;
	x = (node*)malloc(sizeof(struct node));
	x->key = key;
	//在头结点后添加元素；
	x->next=nil->next;
	nil->next->prev=x;
	nil->next=x;
	x->prev=nil;

}

int main(){
	int key, n, i;
	int size = 0;
	char com[20];
	int np = 0, nd = 0;
	scanf("%d", &n);
	init();
	for ( i = 0; i < n; i++ ){
		scanf("%s%d", com, &key);
		if ( com[0] == 'i' ) {insert(key); np++; size++;}
		else if ( com[0] == 'd' ) {
			if (strlen(com) > 6){
	if ( com[6] == 'F' ) deleteFirst();
	else if ( com[6] == 'L' ) deleteLast();
			} else {
	deleteKey(key); nd++; 
			}
			size--;
		}
	}
	printList();
	return 0;
}

#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

struct Node{
	int key;
	Node *prev,*next;
};

//?????????????????¨??????????????????list???????£??????????????????????
Node *nil;

void init(){
	nil = (Node *)malloc(sizeof(Node));
	nil->prev = nil;
	nil->next = nil;
}

void insert(int key){
	Node *x = (Node *)malloc(sizeof(Node));
	x->key = key;
	x->next = nil->next;
	nil->next->prev = x;
	nil->next = x;
	x->prev = nil;
}

Node *listSearch(int key){
	Node *cur = nil->next;
	while(cur != nil && key != cur->key){
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node *t){
	if( t==nil ) return; //???????????????????????????
	t->prev->next = t->next;
	t->next->prev = t->prev;
	free(t);
}

void deleteKey(int key){
	deleteNode(listSearch(key));
}

void deleteFirst(){
	deleteNode(nil->next);
}

void deleteLast(){
	deleteNode(nil->prev);
}

void printList(){
	Node *cur = nil->next;
	while(cur != nil){
		if(cur != nil->next) printf(" ");
		printf("%d",cur->key);
		cur = cur->next;
	}
	printf("\n");
}

int main(){
	init();
	int n;
	scanf("%d",&n);
	
	while(n--){
		char command[10];
		scanf("%s",command);
		
		if(command[0] == 'i'){
			int key;
			scanf("%d",&key);
			insert(key);
		}else if(strlen(command)>6){
			if(command[6] == 'F') deleteFirst();
			else deleteLast();
		}else{
			int key;
			scanf("%d",&key);
			deleteKey(key);
		}
	}
	printList();
	return 0;
}
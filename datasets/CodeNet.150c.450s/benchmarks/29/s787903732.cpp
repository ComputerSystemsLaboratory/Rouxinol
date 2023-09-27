#include<stdio.h>
#include<stdlib.h>
struct Node{
	int key;
	Node *prev,*next;
};

Node *nil;

void init(){
	nil=(Node *)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}

void insert(int key){
	Node *x=(Node *)malloc(sizeof(Node));
	x->key = key;
	x->next = nil->next;
	nil->next->prev= x;
	x->prev = nil;
	nil->next =x; 
}

void deleteFirst(){
	Node *f = nil->next;
	nil->next = f->next;
	f->next->prev = nil;
	free(f);
}

void deleteLast(){
	Node *l = nil->prev;
	l->prev->next = nil;
	nil->prev = l->prev;
	free(l);
}
void deleteNode(int key){
	Node *cur = nil->next;
	while(cur->key != key && cur != nil){
		cur =cur->next;
	}
	if(cur == nil) return;
	cur->prev->next = cur->next;
	cur->next->prev = cur->prev;
	free(cur);
}

int main(){
	init();
	int o,n;
	char s[20];
	scanf("%d",&o);
	getchar();
	while(o--){
		scanf("%s",s);
		if(s[0]=='i'){
			scanf("%d",&n);
			getchar();
			insert(n);
		}
		else if(s[0]=='d'&&s[6]=='F'){
			deleteFirst();
			getchar();
		}
		else if(s[0]=='d'&&s[6]=='L'){
			deleteLast();
			getchar();
		}
		else if(s[0]=='d'){
			scanf("%d",&n);
			getchar();
			deleteNode(n);
		}
	}
	Node *cur=nil->next;
	while(cur != nil){
		printf("%d",cur->key);
		cur = cur->next;
		if(cur != nil) printf(" ");
	}
	printf("\n");
} 

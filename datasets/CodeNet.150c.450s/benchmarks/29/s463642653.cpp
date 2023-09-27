#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;

struct Node{
	int key;
	Node *prev;
	Node *next;
};

Node *nil;
char command[10];

void init();
void insert(int key);
Node *listSearch(int key);
void deleteNode(Node *t);
void deleteFirst();
void deleteLast();
void deleteKey(int key);


int main(void){
	int n;
	cin>>n;

	int key;
	string command;
	
	init();
	for(int i=0;i<n;i++){
		cin>>command;
		if(command=="insert"){
			cin>>key;
			insert(key);
		}else if(command=="deleteFirst"){
			deleteFirst();
		}else if(command=="deleteLast"){
			deleteLast();
		}else if(command=="delete"){
			cin>>key;
			deleteKey(key);
		}
	}

	struct Node *print;
	print = nil->next;
	while(print!=nil){
		if(print->next!=nil){
			cout<<print->key<<" ";
		}else{
			cout<<print->key<<endl;
		}
		print = print->next;
	}

	cin.get();
	cin.get();

}


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
	while(cur!=nil && cur->key!=key){
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node *t){
	if(t==nil) return ;
	t->prev->next = t->next;
	t->next->prev = t->prev;
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
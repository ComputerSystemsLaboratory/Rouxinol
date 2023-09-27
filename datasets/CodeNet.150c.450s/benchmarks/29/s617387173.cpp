#include <iostream>
#include <cstring>
#include <cstdio>

struct Node{
	int key;
	Node *prev, *next;
};
Node *nil;

void insertNode(int key){
	Node *x = (Node *)malloc(sizeof(Node));
	x->key = key;
	nil->next->prev = x;
	x->next = nil->next;
	nil->next = x;
	x->prev = nil;
}

Node* searchNode(int key){
	Node *cur = nil->next;
	while(cur->key != key && cur != nil){
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node *t){
	if(t != nil){
		t->prev->next = t->next;
		t->next->prev = t->prev;
		free(t);
	}
}

void deleteFirst(){
	deleteNode(nil->next);
}

void deleteLast(){
	deleteNode(nil->prev);
}

int main(void){
	int n, key,i;
	char command[20];
	std::cin >> n;
	nil = (Node *)malloc(sizeof(Node));
	nil->next=nil;
	nil->prev=nil;
	Node *cur;

	for(i=0;i<n;i++){
		std::cin >> command;
		if(command[0]=='i') {
			std::cin >> key;
			insertNode(key);
		}
		else{
			if(std::strlen(command) > 6){
				if(command[6]=='F') deleteFirst();
				else if(command[6] = 'L') deleteLast();
			}
			else{
				std::cin >> key;
				deleteNode(searchNode(key));
			}
		}
	}
	
	cur = nil->next;
	while(cur->next != nil){
		std::printf("%d ",cur->key);
		cur = cur->next;
	}
	std::printf("%d\n",cur->key);
	
	return 0;
}
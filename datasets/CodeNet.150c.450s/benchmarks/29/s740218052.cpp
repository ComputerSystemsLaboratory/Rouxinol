#include<bits/stdc++.h>
using namespace std;

struct Node{
	int key;
	Node *next, *prev;
};

Node *nil;

void init(){
	nil = (Node *)malloc(sizeof(Node));
	nil -> next = nil;
	nil -> prev = nil;
}

void insert(int key){
	Node *p = (Node *)malloc(sizeof(Node));
	p->key = key;
	
	p->next = nil->next;
	nil->next->prev = p;
	nil -> next = p;
	p -> prev = nil;
}

void deleteNode(Node *t){
	if(t == nil){
		return;
	}
	t->prev->next = t->next;
	t->next->prev = t->prev;
	free(t);
}

Node* listSearch(int key){
	Node *cur = nil->next;
	while(cur != nil && cur->key != key){
		cur = cur->next;
	}
	return cur;
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

int main(){
	ios::sync_with_stdio(false);
	int n, key;
	string s;
	Node *cur;
	
	cin >> n;
	
	init();
	
	for(int i = 0 ; i< n ; i++){
		cin >> s;
		if(s == "insert") {
			cin >> key;
			insert(key);
		}
		else if(s == "delete") {
			cin >> key;
			deleteKey(key);
		}
		else if(s == "deleteFirst"){
			deleteFirst();
		}
		else if(s == "deleteLast") {
			deleteLast();
		}
	}
	
	int j = 0;
	cur = nil->next;
	
	while(1) {
		if(cur == nil){
			break;
		}
		
		if(j++ > 0){
			cout << " ";
		}
		
		cout << cur->key;
		cur = cur->next;
	}
	
	cout << "\n";
	
	return 0;
}  
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <string>
#include <cstdlib>
#define rep(i,o,u) for(int i = o;i < u; i++)
using namespace std;
struct node{
	int key;
	node *prev, *next;
};
node *nil;
void inti(){
	nil = (node *)malloc(sizeof(node));
	nil->next = nil;
	nil->prev = nil;
}
void insert(int key){
	node *x = (node *)malloc(sizeof(node));
	x->key = key;
	x->next = nil->next;
	nil->next->prev = x;
	nil->next = x;
	x->prev = nil;
}
node* listSearch(int key){
	node *cur = nil->next;
	while(cur != nil && cur->key != key){
		cur = cur->next;
	}
	return cur;
}
void deleteNode(node *t){
	if(t == nil) return;
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
void printList(){
	node *x = nil->next;
	while(x != nil){
		cout << x->key;
		if(x != nil->prev)
			cout << " ";
		x = x->next;
	}
	cout << endl;
}
int main(){
	int n;
	inti();
	cin >> n;
	string a;int b;
	while(n--){
		cin >> a;
		if(a == "insert"){
			cin >> b;
			insert(b);
		}else if(a == "delete"){
			cin >> b;
			deleteKey(b);
		}else if(a == "deleteFirst"){
			deleteFirst();
		}else if(a == "deleteLast"){
			deleteLast();
		}
	}
	printList();
	return 0;
}
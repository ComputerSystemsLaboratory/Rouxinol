#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;

struct Node{
	int key;
	Node *prev, *next;
};

Node *nil;

void init(){
	nil = new Node;
	nil->next = nil;
	nil->prev = nil;
}

void insert(int key){
	Node *x = new Node;
	x->key = key;
	// ???????????´??????????´??????????
	x->next = nil->next;
	nil->next->prev = x;
	nil->next = x;
	x->prev = nil;
}

Node* listSearch(int key){
	Node *cur = nil->next;	// ??????????¬????????´?????????????
	while(cur != nil && cur->key != key){
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node *t){
	if(t == nil) return;	// t??????????????´?????????????????????
	t->prev->next = t->next;
	t->next->prev = t->prev;
	delete t;
}

void deleteFirst(){
	deleteNode(nil->next);
}

void deleteLast(){
	deleteNode(nil->prev);
}

void deletekey(int key){
	// ????´¢????????????????????????
	deleteNode(listSearch(key));
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	init();
	for(int i = 0; i < n; ++i){
		string s;
		int a;
		cin >> s;
		if(s == "insert" || s == "delete"){
			cin >> a;
			if(s == "insert"){
				insert(a);
			}
			if(s == "delete"){
				deletekey(a);
			}
		}
		else {
			if(s == "deleteFirst"){
				deleteFirst();
			}
			if(s == "deleteLast"){
				deleteLast();
			}
		}
	}

	Node *cur = nil->next;
	int i0 = 0;
	while(1){
		if(cur == nil) break;
		if(i0 > 0) cout << " ";
		cout << cur->key;
		cur = cur->next;
		++i0;
	}
	cout << endl;

	return 0;
}
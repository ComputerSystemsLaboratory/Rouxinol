#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

class Node{
public:
	int data;
	Node *prev,*next;
};

Node *nil;

void init(){
	nil = (Node *)malloc(sizeof(Node));
	nil->prev = nil;
	nil->next = nil;
} 

void insert(int x){
	Node *ins = (Node *)malloc(sizeof(Node));
	ins->data = x;
	ins->next = nil->next;
	nil->next->prev = ins;
	nil->next = ins;
	ins->prev = nil;
}

void deleteNode(Node *n){
	if(n == nil) return;
	n->prev->next = n->next;
	n->next->prev = n->prev;
	free(n);
}

void deleteNodeData(int x){
	Node *t = nil->next;
	while(true){
		if(t == nil) break;
		if(t->data == x) {
			deleteNode(t);
			break;
		}
		t = t->next;
	}
}

void deleteFirst(){
	deleteNode(nil->next);
}

void deleteLast(){
	deleteNode(nil->prev);
}

void printNode(){
	Node *t = nil->next;
	while(true){
		if(t == nil) break;
		cout << t->data;
		if(t->next != nil){
			cout << " ";
		}
		t = t->next;
	}
	printf("\n");
}

int main(){
	char s[20];
	int x,n;
	cin >> n;
	string ss;
	init();
	for(int i = 0 ;i < n;i++){
		scanf("%s",s);
		ss = s;
		if(ss == "insert"){
			cin >> x;
			insert(x);
		}else if(ss == "deleteFirst"){
			deleteFirst();
		}else if(ss == "deleteLast"){
			deleteLast();
		}else{
			cin >> x;
			deleteNodeData(x);
		}
	}
	printNode();
	return 0;
}
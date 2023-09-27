#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <stdexcept>
using namespace std;


#define abs(N) ((N>0)?N:-1*N)
#define lt(A,B) ((A>B)?B:A)
#define gt(A,B) ((A<B)?B:A)
#define print(S) (cout << S)
#define println(S) (cout << S << endl)


struct Node{
	Node *prev,*next;
	long long key;
};

Node *nil;


void init(){
	nil = (Node *)malloc(sizeof(Node));
	nil->next=nil;
	nil->prev=nil;
	nil->key=-1;
}

Node *linearSearch(long long key){
	Node *cur = nil->next;
	while(cur != nil && cur->key != key){
		cur = cur->next;
	}

	return cur;
}

void insert(long long key){
	Node *x = (Node *)malloc(sizeof(Node));
	x->key = key;
//	if(nil->next==nil){
//		nil->next = x;
//		nil->prev = x;
//		x->next = nil;
//		x->prev = nil;
//	}else{
		x->next = nil->next;
		nil->next->prev=x;
		nil->next = x;
		x->prev = nil;
//	}
		return;
}

void del(Node *x){
	if(x==nil) return;
	x->prev->next = x->next;
	x->next->prev = x->prev;
	free(x);
}

void delByKey(long long key){
	del(linearSearch(key));
}

void delFirst(){
	del(nil->next);
}

void delLast(){
	del(nil->prev);
}

void printList(){
	Node *cur = nil->next;
	while(cur != nil){
		if(cur->prev != nil)
			printf(" ");
		printf("%d",cur->key);
		cur = cur->next;
	}
	printf("\n");
	return;
}

int main(){
	int n ;

	cin >> n;
	init();
	char cmd[1000];
	long long arg;
	for (int i = 0; i < n; ++i) {
		scanf("%s%d",cmd,&arg);
		if(cmd[0]=='i'){
			insert(arg);
		}else if(strlen(cmd)==6){
			delByKey(arg);
		}else if(cmd[6]=='F'){
			delFirst();
		}else if(cmd[6]=='L'){
			delLast();
		}
//		printList();
	}
	printList();

	return 0;
}


#include <iostream>
#include <iomanip>
#include <math.h>
#include <fstream>
#include <string>
#include <time.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

struct Node{
	int key;
    Node *prev;
	Node *next;
};

Node *nil;

void init(){
	nil = (Node *)malloc(sizeof(Node));
	nil->next=nil;
	nil->prev=nil;
}

void insert(int key){
	Node* x=(Node *)malloc(sizeof(Node));
	x->key=key;
	x->next=nil->next;
	nil->next->prev=x;
	nil->next=x;
	x->prev=nil;
}

Node* listSearch(int key){
	Node* cur = nil->next;
	while(cur != nil&&cur->key != key){
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node *t){
	if(t==nil)return;
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

void print(){
	Node* cur = nil->next;
	while(cur != nil){
		if(cur != nil->next)printf(" "); 
		printf("%d",cur->key);
		cur = cur->next;
	}
	printf("\n");
}

int main(){

	int key,n;
	int size=0;
	char com[20];
	int np=0,nd=0;
	scanf("%d", &n);
	init();
	for(int i=0;i<n;i++){
		scanf("%s%d", com, &key);
		if(com[0]=='i'){insert(key);np++;size++;}
		else if(com[0]=='d'){
			if(strlen(com)>6){
				if(com[6]=='F')deleteFirst();
				else if(com[6]=='L')deleteLast();
			}
			else{
					deleteKey(key);nd++;
			}
			size--;
		}
	}

	print();

	return 0;
}
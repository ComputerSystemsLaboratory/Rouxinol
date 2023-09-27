#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
using namespace std;

struct list{
	int num;
	list *left, *right;
};

list *nill;


void insert(int);
void init(void);
void deleteList(list *dl);
list *seachList(int);
void deleteFirst(void);
void deleteLast(void);
void listOutput(void);

int main(void){
	char c[50];
	int n;
	int s;
	scanf("%d", &s);
	init();
	for(int i = 0; i < s; i++){
		scanf("%s", c);
		if(c[0] == 'i'){
			scanf("%d", &n);
			insert(n);
		}
		else if(c[0] == 'd' && strlen(c) == 6){
			scanf("%d", &n);
			deleteList(seachList(n));
		}
		else if(c[6] == 'F'){
			deleteFirst();
		}
		else{
			deleteLast();
		}
	}
	listOutput();
	return 0;
}



void insert(int nu){
	list *p;
	p = (list*)malloc(sizeof(list));
	p->num = nu;

	p->right = nill->right;
	nill->right->left = p;
	nill->right = p;
	p->left = nill;
}

void init(void){
	nill = (list*)malloc(sizeof(list));
	nill->right = nill;
	nill->left = nill; 
}

list *seachList(int sl){
	list *x = nill->right;
	while(x != nill && x->num != sl){
		x = x->right;
	}
	return x;
}

void deleteList(list *dl){
	if(dl == nill) return;
	dl->left->right = dl->right;
	dl->right->left = dl->left;
	free(dl);
}

void deleteFirst(void){
	deleteList(nill->right);
}

void deleteLast(void){
	deleteList(nill->left);
}

void listOutput(void){
	list *y = nill->right;
	while(y != nill){
		if(y==nill->left){
			printf("%d\n", y->num);
		}
		else{
			printf("%d ", y->num);
		}
		y = y->right;
	}
}


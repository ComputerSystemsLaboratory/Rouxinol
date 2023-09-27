#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
#define MAX 100
using namespace std;
vector<int> zhongxu,qianxu;
struct node{int key;node *p,*l,*r;};
node *root,*NIL;

void insert(int num){
	node *y=NIL;node *x=root;node *z;
	z=(node *)malloc(sizeof(node ));
	while(x!=NIL){
		y=x;
		if(num<x->key){x=(*x).l;}
		else {x=x->r;}
	}
	z->key=num;z->l=NIL;z->r=NIL;z->p=y;
	if(y==NIL){
		root=z;
	}else if(num>y->key){
		y->r=z;
	}else{y->l=z;}
}
void zhong(node *u){
	if(u->l!=NIL) zhong(u->l);
	cout<<" "<<u->key;
	if(u->r!=NIL) zhong(u->r);
	return ;
}
void qian(node *u){
	cout<<" "<<u->key;
	if(u->l!=NIL) qian(u->l);
	if(u->r!=NIL) qian(u->r);
	return;
}
void print(node *u){
	zhong(u);cout<<endl;
	qian(u);cout<<endl;return;
}
int main(){
	int cnt;int num;
	scanf("%d",&cnt);
	char order[10];
	vector<int> ::iterator it;
	for(int i=0;i<cnt;i++){
		scanf("%s",&order);
		if(order[0]=='i') {
		scanf("%d",&num);insert(num);
		}
		else if(order[0]=='p') {print(root);
		}
	}
}

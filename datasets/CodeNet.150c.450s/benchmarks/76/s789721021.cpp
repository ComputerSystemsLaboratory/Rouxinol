#include<bits/stdc++.h>
using namespace std;
#define MAX 500000
struct Node{
	int key;
	Node *parent,*left,*right;
};
Node *root,*NIL;
int H;
void insert(int key){
	Node *y=NIL;//记录父结点
	Node *x=root;//子结点
	Node *z;
	
	z=(Node *)malloc(sizeof(Node));
	z->key=key;
	z->left=NIL;
	z->right=NIL;
	
	while(x!=NIL){
		y=x;
		if(x->key>z->key){
			x=x->left;
		}
		else
			x=x->right;
	}
	z->parent=y;
	if(y==NIL)
		root=z;
	else if(z->key<y->key)
		y->left=z;
	else
		y->right=z;
}
Node *find(Node *u,int key){
	while(u!=NIL&&u->key!=key){
		if(key<u->key){
			u=u->left;
		}
		else{
			u=u->right;
		}
	}
	return u;	
}
void preParse(Node *u){
	if(u==NIL)
		return ;
	cout<<" "<<u->key;
	preParse(u->left);
	preParse(u->right);
}
void inParse(Node *u){
	if(u==NIL)
		return ;
	inParse(u->left);
	cout<<" "<<u->key;
	inParse(u->right); 
}
int main(){
    cin>>H;
    char com[10];
    int x;
    for(int i=0;i<H;i++){
        cin>>com;
        if(com[0]=='i'){
            cin>>x;
            insert(x);
        }
        if(com[0]=='f'){
            cin>>x;
            if(find(root,x)!=NIL)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        if(com[0]=='p'){
            inParse(root);
            cout<<endl;
            preParse(root);
            cout<<endl;
        }
    }
	return 0;
} 

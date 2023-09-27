#include<bits/stdc++.h>
using namespace std;
struct Node{
	   int key,id;
	   Node *parent,*left,*right;
};
Node *root,*NIL;
bool f;
vector<int> r;
void find(int k){
	 Node *x;
	 x=root;
	 while (x!=NIL && k!=x->key){
	 	if (k<x->key)
	 	   x=x->left;
	 	else
	 	   x=x->right;
	 }
	 if (x!=NIL)
	    cout<<"yes"<<endl;
	 else
	    cout<<"no"<<endl;
}
void insert(int k){
	 Node *y,*x,*z;
	 y=NIL;
	 x=root;
	 z=(Node *)malloc(sizeof(Node));
	 z->key=k;
	 z->left=NIL;
	 z->right=NIL;
	 while (x!=NIL){
	 	   y=x;
	 	   if (z->key<x->key)
	 	     x=x->left;
	 	   else
	 	     x=x->right;
	 }
	 if (y==NIL){
	 	root=z;
	 }
	 else
	    if (z->key<y->key)
	       y->left=z;
	    else
	       y->right=z;
}
void pre(Node *u){
	 if (u==NIL) return;
	 //r.push_back(u->key);
	 cout<<' '<<u->key;
	 pre(u->left);
	 pre(u->right);
}
void in(Node *u){
	 if (u==NIL) return;
	 in(u->left);
	 cout<<' '<<u->key;
	 //r.push_back(u->key);
	 in(u->right);
}
int n,x;
string s;
int main(){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>s;
		if (s[0]=='i'){
			cin>>x;
			insert(x);
		}
		else{
			if (s[0]=='p'){
			   in(root);
		       cout<<'\n';
		       pre(root);
			   cout<<'\n';
			}
			else{
				cin>>x;
				f=false;
				find(x);
			}
		}
		   
	}
	
	return 0;
} 

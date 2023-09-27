#include<bits/stdc++.h>

#define ms(a,x) memset(a,x,sizeof(a))
using namespace std;

typedef long long ll;
struct pp{
	int key;
	pp *l, *r, *p; 
};

pp *root , *NIL;
pp * find(pp *x,int k){
	while(x != NIL &&k != x->key){
		if(k < x->key)
			x = x->l;
		else 
			x = x->r;
	}
	return x;
}

void insert (int k){
	pp *y=NIL;
	pp *x=root;
	pp *z;
	z = (pp *)malloc(sizeof(pp));
	
	z->key=k;
	z->l=NIL;
	z->r=NIL;
	
	
	while(x!=NIL){
		y=x;
		if(z->key < x->key){
			x=x->l;
		}
		else {
			x=x->r;
		}
	}
	
	z->p=y;
	if(y==NIL){
		root = z;
	}else 
		if(z->key < y->key){
			y->l = z;
		}
		else {
			y->r = z;
		}
}

void in(pp *x){
	if(x == NIL) return ;
	in(x->l);
	printf(" %d",x->key);
	in(x->r);
}

void pr(pp *x){
	if(x == NIL) return ;
	printf(" %d",x->key);
	pr(x->l);
	pr(x->r);
}
int main(){
	int n,x;
	string com;
	cin >> n;
	for (int i = 0 ; i < n ; i ++){
		cin>>com;
		if(com[0] == 'f'){
			scanf("%d", &x);
			pp *t= find(root ,x );
			if(t != NIL)cout<<"yes\n";
			else printf("no\n");
		} 
		else if(com == "insert"){
			scanf("%d", &x);
			insert(x);
		}
		else if(com == "print"){
			in(root);
			cout<<endl;
			pr(root);
			cout<<endl;
		}
	}
	return 0;
}



#define pb push_back
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int n, q;
string cmd;
struct node{
	node *l, *r;
	int key = 0;
	node(int k){
		key = k;
		l = r = NULL;
	}
};
node* insert(node* r, int key){
	if(r == NULL || r->key == key) return new node(key);
	if(r->key > key){
		r->l = insert(r->l, key);
	}else r->r = insert(r->r, key);
	return r;
}
void pre(node* r){
	if(!r) return;
//	if(ff) cout << " ";
	printf(" %d", r->key); 
	pre(r->l);
	pre(r->r);
}
void in(node* r){
	if(!r) return;
	in(r->l);
	printf(" %d", r->key); 
	in(r->r);
}
int cc = 0;
node* root = NULL;
void solve(){
	root = NULL;
	cc = 0;
	cin >> q;
	while(q--){
		cin >> cmd;
		if(cmd[0] == 'i'){
			int x; cin >> x;
		//	cout << cmd << " " << x << endl;
			root = insert(root, x);
		}else{
			in(root); 
			cout << endl;
			pre(root);
			cout << endl;
//			bool ok = false;
//			if(cc != 0) cout << endl, ok = true;
//			cc++;
//			if(q == 0 && ok == false) cout << endl;
		}
	}
	//cout << "root: " << root->key << endl;
}
int main(){
	solve();
	return 0;
}

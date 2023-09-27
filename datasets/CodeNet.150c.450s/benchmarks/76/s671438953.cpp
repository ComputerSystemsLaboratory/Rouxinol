#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTree{
public:
	struct Node{
		T val;
		Node *lch,*rch;
	};
	BinaryTree():root(NULL){}
	
	Node* root;
	Node* insert(T x){ return root = insert(root, x);}
	bool find(T x){ return find(root, x); }
	Node* erase(T x){ return root = erase(root, x); }
	void inorderPrint(){ inorderPrint(root); cout<<endl;}
	void preorderPrint(){ preorderPrint(root); cout<<endl;}

private:
	Node* insert(Node* p,T x){
		if(p == NULL){
			Node* q = new Node;
			q->val = x;
			q->rch = q->lch = NULL;
			return q;
		}else{
			if( x < p->val )p->lch = insert(p->lch, x);
			else p->rch = insert(p->rch, x);
			return p;
		}
	}

	bool find(Node* p,T x){
		if( p == NULL )return false;
		else if( x == p->val )return true;
		else if( x < p->val )return find(p->lch, x);
		else return find(p->rch, x);
	}

	Node* erase(Node* p,T x){
		if( p == NULL )return NULL;
		else if( x < p->val )p->lch = erase(p->lch, x);
		else if( x > p->val )p->rch = erase(p->rch, x);
		else if( p->lch == NULL ){
			Node* q = p->rch;
			delete p;
			return q;
		}else if( p->rch == NULL ){
			Node* q = p->lch;
			delete p;
			return q;
		}else{
			Node* q = p->lch;
			if(q->rch == NULL){
				q->rch = p->rch;
				delete p;
				return q;
			}else{
				while(q->rch->rch != NULL) q = q->rch;
				Node* r = q->rch;
				q->rch = r->lch;
				r->lch = p->lch;
				r->rch = p->rch;
				delete p;
				return r;
			}
		}
		return p;
	}
	void inorderPrint(Node* p){
		if(p == NULL)return;
		inorderPrint(p->lch);
		cout << " " << p->val;
		inorderPrint(p->rch);
	}
	void preorderPrint(Node* p){
		if(p == NULL)return;
		cout << " " << p->val;
		preorderPrint(p->lch);
		preorderPrint(p->rch);
	}
};


int main(void){

	BinaryTree<int> bt;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		if(s == "insert"){
			int a;cin >> a;
			bt.insert(a);
		}
		else if(s == "find"){
			int a;cin >> a;
			if(bt.find(a))cout << "yes" << endl;
			else cout << "no" << endl;
		}
		else if(s == "print"){
			bt.inorderPrint();
			bt.preorderPrint();
		}
	}

	return 0;
}
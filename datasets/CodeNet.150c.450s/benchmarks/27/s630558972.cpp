#include "bits/stdc++.h"

#define REP(i,num) for(int i=0;i<(num);++i)
#define ALL(c) c.begin(),c.end()
#define PRINTALL(c) for(auto& x:c){cout<<x<<' ';}cout<<endl;
#define PAIRCOMP(c,comp) [](const pair<ll,ll>& lhs,const pair<ll,ll>& rhs){return lhs.c comp rhs.c;}

using namespace std;
using ll = long long;

constexpr ll atcoder_mod = 1e9+7;

template<typename T=int>
T in(){T x; cin >> x; return (x);}
template<typename T=int,typename C=vector<T>>
C vecin(int N){C x(N);REP(i,N){x[i]=in<T>();}return move(x);}

void vout(){cout << endl;}
template<typename Head,typename... Tail>
void vout(Head&& h,Tail&&... t){cout << ' ' << h;vout(forward<Tail>(t)...);}
void out(){cout << endl;}
template<typename Head,typename... Tail>
void out(Head&& h,Tail&&... t){cout << h;vout(forward<Tail>(t)...);}

const int NIL = -2000000010;

class Node{
public:
	int key;
	list<Node>::iterator parent,left,right;
};

class Tree{
public:
	list<Node> node_list;
	list<Node>::iterator root;
	vector<int> preorder,inorder;

	Tree(){
		root = node_list.end();
	}
	void insert(list<Node>::iterator z){
		list<Node>::iterator y = node_list.end();
		list<Node>::iterator x = root;

		while(x!=node_list.end()){
			y = x;
			if(z->key<x->key){
				x = x->left;
			}
			else{
				x = x->right;
			}
		}
		z->parent = y;
		if(y==node_list.end()){
			root = z;
		}
		else if(z->key<y->key){
			y->left = z;
		}
		else{
			y->right = z;
		}
	}
	void DFS(list<Node>::iterator parent){
		preorder.push_back(parent->key);
		
		if(parent->left==node_list.end()){
			inorder.push_back(parent->key);
		}
		else{
			DFS(parent->left);
			inorder.push_back(parent->key);
		}

		if(parent->right!=node_list.end()){
			DFS(parent->right);
		}
	}
	void DFS(){
		preorder.clear();
		inorder.clear();
		DFS(root);
	}
};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N=in();
	Tree tree;
	REP(i,N){
		string S=in<string>();
		if(S=="insert"){
			Node n;
			n.key = in();
			n.parent=n.left=n.right=tree.node_list.end();
			auto z = tree.node_list.insert(tree.node_list.end(),n);
			tree.insert(z);
		}
		else{
			tree.DFS();
			int num = tree.preorder.size();
			REP(j,num){
				cout << ' ' << tree.inorder[j];
			}
			cout << endl;
			REP(j,num){
				cout << ' ' << tree.preorder[j];
			}
			cout << endl;
		}
	}
	
	return 0;
}


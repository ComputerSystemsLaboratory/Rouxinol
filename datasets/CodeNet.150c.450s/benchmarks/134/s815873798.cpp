#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
#define vi vector<int>
#define vs vector<string>
typedef pair<string,int> card;
#define mark first
#define kazu second
const int inf=1e9+1;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009
#define pi 3.14159265358979323846

class Tree{
public:
	Tree(){}
	int id;
	int degree;
	int parent;
	int sibling;
	int left;
	int right;
};

void preorder(vector<Tree> &tree,int id);
void inorder(vector<Tree> &tree,int id);
void postorder(vector<Tree> &tree,int id);

int main(){
	int n,i,j,k;
	cin>>n;
	vector<Tree> tree(n);
	loop(i,0,n){
		tree[i].id=i;
		tree[i].parent=-1;
	}
	int id,left,right;
	loop(i,0,n){
		cin>>id>>left>>right;
		tree[id].left=left;
		tree[id].right=right;
		tree[left].parent=id;
		tree[right].parent=id;
	}
	loop(i,0,n){
		if(tree[i].parent==-1){
			id=i;
			break;
		}
	}
	cout<<"Preorder"<<endl;
	preorder(tree,id);
	cout<<endl<<"Inorder"<<endl;
	inorder(tree,id);
	cout<<endl<<"Postorder"<<endl;
	postorder(tree,id);
	cout<<endl;
}
void preorder(vector<Tree> &tree,int id){
	cout<<" "<<id;
	if(tree[id].left!=-1){
		preorder(tree,tree[id].left);
	}
	if(tree[id].right!=-1){
		preorder(tree,tree[id].right);
	}
}

void inorder(vector<Tree> &tree,int id){
	if(tree[id].left!=-1){
		inorder(tree,tree[id].left);
	}
	cout<<" "<<id;
	if(tree[id].right!=-1){
		inorder(tree,tree[id].right);
	}
}

void postorder(vector<Tree> &tree,int id){
	if(tree[id].left!=-1){
		postorder(tree,tree[id].left);
	}
	if(tree[id].right!=-1){
		postorder(tree,tree[id].right);
	}
	cout<<" "<<id;
}
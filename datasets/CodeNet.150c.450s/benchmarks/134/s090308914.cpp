#include <iostream>
using namespace std;

#define NIL -1
#define MAX 25

struct Node{
	int parent,left,right;
	Node(){
		parent = NIL;
	}
	};
	
Node node[MAX];

void preParse(int id){
	if(id==NIL){return;}
	cout<<" "<<id;
	preParse(node[id].left);
	preParse(node[id].right);
}

void inParse(int id){
	if(id==NIL){return;}
	inParse(node[id].left);
	cout<<" "<<id;
	inParse(node[id].right);
}

void postParse(int id){
	if(id==NIL){return;}
	postParse(node[id].left);
	postParse(node[id].right);
	cout<<" "<<id;
}

int main() {
	// your code goes here
	int n;
	int id,left,right;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>id>>left>>right;
		node[id].left=left;
		node[id].right=right;
		if(right!=NIL){node[right].parent=id;}
		if(left!=NIL){node[left].parent=id;}
	}
	int root;
	for(int i=0;i<n;i++){
		if(node[i].parent==NIL){
			root = i;
		}
	}
	cout<<"Preorder"<<endl;
	preParse(root);
	cout<<endl<<"Inorder"<<endl;
	inParse(root);
	cout<<endl<<"Postorder"<<endl;
	postParse(root);
        cout<<endl;
	
	return 0;
}
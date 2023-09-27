#include<iostream>
using namespace std;

typedef struct{
	int parent,left,right;
}Node;

void prePause(int u);
void inPause(int u);
void postPause(int u);

Node *T;

int main(){
	int n; cin>>n;
	T = new Node[n];

	for(int i=0;i<n;i++) T[i].parent = T[i].left = T[i].right = -1;
	for(int i=0;i<n;i++){
		int id; cin>>id;
		cin>>T[id].left>>T[id].right;
		if(T[id].left!=-1) T[T[id].left].parent = id;
		if(T[id].right!=-1) T[T[id].right].parent = id;
	}
	int root;
	for(int i=0;i<n;i++)
		if(T[i].parent==-1) root = i;

	cout<<"Preorder"<<endl;
	prePause(root);
	cout<<endl;

	cout<<"Inorder"<<endl;
	inPause(root);
	cout<<endl;

	cout<<"Postorder"<<endl;
	postPause(root);
	cout<<endl;

	delete [] T;
}

void prePause(int u){
	if(u==-1) return;
	cout<<" "<<u;
	prePause(T[u].left);
	prePause(T[u].right);
}

void inPause(int u){
	if(u==-1) return ;
	inPause(T[u].left);
	cout<<" "<<u;
	inPause(T[u].right);
}

void postPause(int u){
	if(u==-1) return;
	postPause(T[u].left);
	postPause(T[u].right);
	cout<<" "<<u;
}
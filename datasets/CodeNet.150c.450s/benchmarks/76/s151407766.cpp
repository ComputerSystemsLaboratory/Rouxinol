#include<iostream>
#include<vector>
using namespace std;

struct Vertex{
	int key;
	int parent;
	int left;
	int right;
};

vector<Vertex> V;
int root=-1;

void Preorder(int r){
	cout <<" "<< V[r].key;
	if(V[r].left!=-1) Preorder(V[r].left);
	if(V[r].right!=-1) Preorder(V[r].right);
	return;
}

void Inorder(int r){
	if(V[r].left!=-1) Inorder(V[r].left);
	cout <<" "<< V[r].key;
	if(V[r].right!=-1) Inorder(V[r].right);
	return;
}

void Postorder(int r){
	if(V[r].left!=-1) Postorder(V[r].left);
	if(V[r].right!=-1) Postorder(V[r].right);
	cout <<" "<< V[r].key;
	return;
}

void insert(int k){
	Vertex z;
	z.key=k;
	z.left=-1;
	z.right=-1;
	
	int y=-1;
	int x=root;
	while(x!=-1){
		y=x;
		if (z.key<V[x].key){
			x=V[x].left;
		}else{
			x=V[x].right;
		}
	}
	z.parent=y;
	V.push_back(z);
	
	if(y==-1){
		root = 0;
	}else if(z.key < V[y].key){
		V[y].left=V.size()-1;
	}else{
		V[y].right=V.size()-1;
	}
}

void printVertex(int i){
	cout << V[i].key <<" " <<V[i].parent <<" " << V[i].left << " " << V[i].right <<endl;
}

void print(){
	Inorder(root);
	cout <<endl;
	Preorder(root);
	cout <<endl;
}

bool find(int k){
	int v=root;
	while(1){
		if(k == V[v].key){
			return true;
		}else if(k < V[v].key){
			if(V[v].left==-1){
				return false;
			}else{
				v=V[v].left;
			}
		}else{
			if(V[v].right==-1){
				return false;
			}else{
				v=V[v].right;
			}
		}
	}
}

int main(){
	int n,k;
	string s;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> s;
		if(s=="insert"){
			cin >> k;
			insert(k);
		}else if(s=="find"){
			cin >> k;
			if(find(k)){
				cout <<"yes"<<endl;
			}else{
				cout << "no" <<endl;
			}
		}else{
			print();
		}
	}
	/*
	for(int i=0;i<n;i++){
		printVertex(i);
		cout <<endl;
	}
	*/
	return 0;
}
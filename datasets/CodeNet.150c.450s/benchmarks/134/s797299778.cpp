#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

struct tree{
	int lr[2];
	int degree;
	int parent;
};

void Preorder(vector<struct tree> node, int x){
	cout<<" "<<x;
	for(int i=0;i<2;i++)
		if(node[x].lr[i] != -1)
			Preorder(node, node[x].lr[i]);
}

void Inorder(vector<struct tree>node, int x){
	if(node[x].lr[0] != -1)
		Inorder(node, node[x].lr[0]);

	cout<<" "<<x;

	if(node[x].lr[1] != -1)
		Inorder(node, node[x].lr[1]);
}

void Postorder(vector<struct tree> node, int x){
	for(int i=0;i<2;i++)
		if(node[x].lr[i] != -1)
			Postorder(node, node[x].lr[i]);

	cout<<" "<<x;
}

int main(){
	int n, id, d[2], x;
	vector<struct tree> node(25);
	
	cin>>n;

	for(int i=0;i<n;i++)
		node[i].parent = -1;

	for(int i=0;i<n;i++){
		cin>>id>>d[0]>>d[1];
		for(int j=0;j<2;j++){
			node[id].lr[j] = d[j];
			if(d[j] != -1)
				node[d[j]].parent = id;
		}
	}

	for(int i=0;i<n;i++)
		if(node[i].parent == -1)
			x = i;

	cout<<"Preorder"<<endl;
	Preorder(node, x);
	cout<<endl<<"Inorder"<<endl;
	Inorder(node, x);
	cout<<endl<<"Postorder"<<endl;
	Postorder(node, x);
	cout<<endl;

	return 0;
}
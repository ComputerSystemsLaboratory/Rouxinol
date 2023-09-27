#include<iostream>

struct Node{
	int left;
	int right;
	int id;
	int parent;
};

void Preorder(Node A);
void Inorder(Node A);
void Postorder(Node A);

using namespace std;

Node Array[30];

int main(void)
{
	int n,root;
	
	cin>>n;
	for(int i=0;i<n;i++) Array[i].parent=-1;
	for(int i=0;i<n;i++)
	{
		int id;
		
		cin>>id;
		Array[id].id=id;
		cin>>Array[id].left>>Array[id].right;
		Array[Array[id].left].parent=id;
		Array[Array[id].right].parent=id;
	}
	for(int i=0;i<n;i++)
		if(Array[i].parent==-1)
		{
			root=i;
			break;
		}
	cout<<"Preorder"<<endl;
	Preorder(Array[root]);
	cout<<endl;
	cout<<"Inorder"<<endl;
	Inorder(Array[root]);
	cout<<endl;
	cout<<"Postorder"<<endl;
	Postorder(Array[root]);	
	cout<<endl;
	
	return 0;
}

void Preorder(Node A)
{
	cout<<" "<<A.id;
	if(A.left!=-1)
	{
		Preorder(Array[A.left]);
	}
	if(A.right!=-1)
	{
		Preorder(Array[A.right]);
	}
}

void Inorder(Node A)
{
	if(A.left!=-1)
		Inorder(Array[A.left]);
	cout<<" "<<A.id;
	if(A.right!=-1)
		Inorder(Array[A.right]);
}

void Postorder(Node A)
{
	if(A.left!=-1)
	{
		Postorder(Array[A.left]);
	}
	if(A.right!=-1)
	{
		Postorder(Array[A.right]);
	}
	cout<<" "<<A.id;
}
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vec;

struct node
{
	int fa,ls,rs;
	node()
	{
		fa=ls=rs=-1;
	}
}T[25];

vec Pre,In,Post;

void Preorder(int t)
{
	if(t==-1) return;
	Pre.push_back(t);
	Preorder(T[t].ls);
	Preorder(T[t].rs);
}

void Inorder(int t)
{
	if(t==-1) return;
	Inorder(T[t].ls);
	In.push_back(t);
	Inorder(T[t].rs);
}

void Postorder(int t)
{
	if(t==-1) return;
	Postorder(T[t].ls);
	Postorder(T[t].rs);
	Post.push_back(t);
}

void print(const vec& V)
{
	for(int i=0;i<V.size();i++)
		printf(" %d",V[i]);
	printf("\n");
}

int main()
{ 
	//freopen("out.txt","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int id,ls,rs;
		scanf("%d%d%d",&id,&ls,&rs);
		T[id].ls=ls;
		T[id].rs=rs;
		if(ls!=-1) T[ls].fa=id;
		if(rs!=-1) T[rs].fa=id;
	}
	int root;
	for(root=0;T[root].fa!=-1;root++);
	Preorder(root);
	Inorder(root);
	Postorder(root);
	printf("Preorder\n");
	print(Pre);
	printf("Inorder\n");
	print(In);
	printf("Postorder\n");
	print(Post);
	return 0;
}
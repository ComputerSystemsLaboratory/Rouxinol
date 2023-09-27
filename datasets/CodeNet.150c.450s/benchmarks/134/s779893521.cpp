#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7,MAX = 1e5;

struct Node{int parent,left,right;};
Node T[100001];
int D[100001],H[100001];
void setDepth(int u,int p)
{
	D[u] = p;
	if(T[u].right != -1)
	{
		setDepth(T[u].right,p+1);
	}
	if(T[u].left != -1)
	{
		setDepth(T[u].left,p+1);
	}
}

int setHeight(int u)
{
	int h1,h2;
	h1=h2=0;
	if(T[u].left!=-1)h1 = setHeight(T[u].left)+1;
	if(T[u].right!=-1)h2 = setHeight(T[u].right)+1;
	return H[u] = max(h1,h2);
}


int getSibling(int u)
{
	if(T[u].parent==-1)return -1;
	int p = T[u].parent;
	int l = T[p].left;
	int r = T[p].right;
	if(l==u&&r==-1)return -1;
	if(l==-1&&r==u)return -1;
	if(l==u)return r;
	return l;
}

void Preorder(int i)
{
	cout<<' '<<i;
	if(T[i].left!=-1)Preorder(T[i].left);
	if(T[i].right!=-1)Preorder(T[i].right);
}

void Inorder(int i)
{
	if(T[i].left!=-1)Inorder(T[i].left);
	cout<<' '<<i;
	if(T[i].right!=-1)Inorder(T[i].right);
}

void Postoder(int i)
{
	if(T[i].left!=-1)Postoder(T[i].left);
	if(T[i].right!=-1)Postoder(T[i].right);
	cout<<' '<<i;
	
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		T[i].left=T[i].right=T[i].parent = -1;
	}
	for(int i = 0;i<n;i++)
	{
		int now;
		cin >> now;
		int l ,r;
		cin >> l >> r;
		T[now].left = l;
		T[now].right = r;
		if(l!=-1)T[l].parent = now;
		if(r!=-1)T[r].parent = now;
	}
	for(int i = 0;i<n;++i)
	{
		if(T[i].parent==-1)
		{
			cout<<"Preorder\n";
			Preorder(i);cout<<endl;
			cout<<"Inorder\n";
			Inorder(i);cout<<endl;
			cout<<"Postorder\n";
			Postoder(i);cout<<endl;
			break;
		}
	}

	return 0;
}

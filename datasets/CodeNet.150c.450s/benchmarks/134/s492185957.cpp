#include<iostream>
const int MAXN = 10005;
const int NIL = -1;
using namespace std;
struct Node{int l, r, p;};  
struct Node T[MAXN]; 

void preoder(int u)
{
	if(u == NIL) return;
	cout << " " << u;
	preoder(T[u].l);
	preoder(T[u].r); 
}

void inorder(int u)
{
	if(u == NIL) return;
	inorder(T[u].l);
	cout << " " << u;
	inorder(T[u].r); 
}

void postorder(int u)
{
	if(u == NIL) return;
	postorder(T[u].l);
	postorder(T[u].r);
	cout << " " << u; 
}

int main ()
{
	int n, l, r, root, u, i;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		T[i].l = T[i].r = T[i].p = NIL;
	}
	for(i = 0; i < n; i++)
	{
		cin >> u >> l >> r;
		T[u].l = l;
		T[u].r = r;
		if(l != NIL) T[l].p = u;
		if(r != NIL) T[r].p = u; 
	}
	for(i = 0; i < n; i++)
	{
		if(T[i].p == NIL) 
			root = i;
	}

	cout << "Preorder"<< endl;
	preoder(root);
	cout << endl;
	cout << "Inorder" << endl;
	inorder(root);
	cout << endl;
	cout << "Postorder" << endl;
	postorder(root);
	cout << endl;	
	return 0;
} 

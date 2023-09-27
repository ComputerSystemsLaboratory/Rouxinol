#include <iostream>
#define MAX 10000
#define NIL -1 

using namespace std;

struct Node
{
	int parent;
	int left;
	int right;
}T[MAX];

void preparse(int u)
{
	if(u == NIL)
	{
		return ;
	}
	cout << " " << u;
	preparse(T[u].left);
	preparse(T[u].right);
}

void inparse(int u)
{
	if(u == NIL)
	{
		return ;
	}
	inparse(T[u].left);
	cout << " " << u;
	inparse(T[u].right);
}

void postparse(int u)
{
	if(u == NIL)
	{
		return ;
	}
	postparse(T[u].left);
	postparse(T[u].right);
	cout << " " << u;
}

int main()
{
	int n, i, u, left, right, r;
	cin >> n;
	for(i = 0; i < MAX; i++)
	{
		T[i].left = T[i].parent = T[i].right = NIL;
	}
	for(i = 0; i < n; i++)
	{
		cin >> u >> left >> right;
		T[u].left = left;
		T[u].right = right;
		T[left].parent = T[right].parent = u;
	}
	for(i = 0; i < n; i++)
	{
		if(T[i].parent == NIL)
		{
			r = i;
			break;
		}
	}
	
	cout << "Preorder" << endl;
	preparse(r);
	cout << endl;
	
	cout << "Inorder" << endl;
	inparse(r);
	cout << endl;
	
	cout << "Postorder" << endl;
	postparse(r);
	cout << endl;
	
	return 0;
}

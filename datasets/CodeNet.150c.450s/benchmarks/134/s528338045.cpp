#include<iostream>
#include<algorithm>
using namespace std;

int n, place;

struct node
{
	int id, pid;
	int lc, rc;
}N[10000];

void Preorder(node root)
{
	cout << " " << root.id;

	if (root.lc != -1)
		Preorder(N[root.lc]);
	if (root.rc != -1)
		Preorder(N[root.rc]);
}

void Inorder(node root)
{
	if (root.lc != -1)
		Inorder(N[root.lc]);

	cout << " " << root.id;

	if (root.rc != -1)
		Inorder(N[root.rc]);
}
	
void Postorder(node root)
{
	if (root.lc != -1)
		Postorder(N[root.lc]);
	if (root.rc != -1)
		Postorder(N[root.rc]);

	cout << " " << root.id;
}

void print()
{
	node root;

	for (int i = 0; i < n; i++)
		if (N[i].pid == -1)
			root = N[i];

	cout << "Preorder\n";
	Preorder(root);  
	cout << endl;

	cout << "Inorder\n";
	Inorder(root);
	cout << endl;

	cout << "Postorder\n";
	Postorder(root);;
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	;
	cin >> n;
	for (int i = 0; i < n; i++)
		N[i].pid = -1;

	for (int i = 0; i < n; i++)
	{
		cin >> place;
		N[place].id = place;

		cin >> N[place].lc >> N[place].rc;
		N[N[place].lc].id = N[place].lc;
		N[N[place].rc].id = N[place].rc;

		if (N[place].lc != -1 && N[place].rc != -1)
		{
			N[N[place].lc].pid = N[place].id;
			N[N[place].rc].pid = N[place].id;
		}

		if (N[place].lc != -1 && N[place].rc == -1)
			N[N[place].lc].pid = N[place].id;

		if (N[place].rc != -1 && N[place].lc == -1)
			N[N[place].rc].pid = N[place].id;
	}

	print();

	return 0;
}


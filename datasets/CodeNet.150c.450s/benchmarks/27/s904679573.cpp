#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define pb push_back
#define ll long long 
const int maxn = 500000 + 5;

struct Node
{
	ll id = -1;
	ll key = -1;
	ll parent = -1;
	ll l = -1;
	ll r = -1;
};

int m;
ll key;
ll root;
int cnt = -1;
string str;
vector<Node> tree;

void insert(int id, int now)
{
	int v = tree[now].key;
	if(id < v) 
	{
		if(tree[now].l == -1)
		{
			tree[now].l = cnt;
			tree[cnt].parent = now;
		}
		else insert(id, tree[now].l);
	}
	else 
	{
		if(tree[now].r == -1)
		{
			tree[now].r = cnt;
			tree[cnt].parent = now;
		}
		else insert(id, tree[now].r);
	}
}

void Inorder(int num)
{
    if(num == -1) return;
    Inorder(tree[num].l);
    cout << " " << tree[num].key;
    Inorder(tree[num].r);
}

void Preorder(int num)
{
    if(num == -1) return;
    cout << " " << tree[num].key;
    Preorder(tree[num].l);
    Preorder(tree[num].r);
}

void print(int id)
{
	Inorder(id);
	cout << endl;
	Preorder(id);
	cout << endl;
}

int main()
{
	cin >> m;
	int flag = 0;
	rep(i,m)
	{
		cin >> str;
		if(str == "insert") 
		{
			cin >> key;
			cnt++;
			Node node; node.key = key; node.id = cnt;
			tree.pb(node);
			if(!flag) { flag = 1; continue; }
			insert(key, 0);
		}
		else print(root);
	}

	// rep(i,cnt+1)
	// {
	// 	printf("id:%d key:%d l:%d r:%d\n", tree[i].id, tree[i].key, tree[i].l, tree[i].r);
	// }

}

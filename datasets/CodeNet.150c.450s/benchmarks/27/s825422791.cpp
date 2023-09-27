#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <functional>
#include <iomanip>
#include <vector>
#include <queue>
#include <set>
#include <typeinfo>
#define PI 3.14159265359
#define INF 99999999;
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define EPS 1e-10
typedef long long ll;
using namespace std;
typedef pair<int, int> P;

double distanceAB(double xa, double ya, double xb, double yb);
void trace(int A[], int N);

/*
class Target
{
public:
	vector <string> draw(int n)
	{

	}
};
*/


struct Node
{
	int key;
	Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k)
{
	Node *y = NIL;
	Node *x = root;
	Node *z;
	
	z = (Node *)malloc(sizeof(Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;
	
	while (x != NIL)
	{
		y = x;
		if (z->key < x->key)
		{
			x = x->left;
		} else {
			x = x->right;
		}
	}
	
	z->parent = y;
	if (y == NIL)
	{
		root = z;
	} else {
		if (z->key < y->key)
		{
			y->left = z;
		} else {
			y->right = z;
		}
	}
}

void inorder(Node *u)
{
	if (u == NIL) return;
	inorder(u->left);
	printf(" %d", u->key);
	inorder(u->right);
}

void preorder(Node *u)
{
	if (u == NIL) return;
	printf(" %d", u->key);
	preorder(u->left);
	preorder(u->right);
}


int main()
{
	int n, i, x;
	string com;
	
	cin >> n;
	REP(n)
	{
		cin >> com;
		if (com == "insert")
		{
			cin >> x;
			insert(x);
		} else if (com == "print") {
			inorder(root);
			printf("\n");
			preorder(root);
			cout << endl;
		}
	}
	
	return 0;
}


void trace(int A[], int N)
{
	REP(N)
	{
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
}


double distanceAB(double xa, double ya, double xb, double yb)
{
	return sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
}
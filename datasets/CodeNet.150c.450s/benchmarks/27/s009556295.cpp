#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
#include <cstdlib>
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i < (int)n; i++)
#define Loopr(i, n) for(int i= (int)n - 1; i >= 0; i--)
using namespace std;
typedef long long int ll;


struct node {
	int key;
	node *left, *right;
};

node* NIL = (node*)malloc(sizeof(node));
node* root;
int k;

void insert(node** focus) {
	if (*focus == NIL) {
		node* buf = (node*)malloc(sizeof(node));
		buf->key = k;
		buf->left = NIL;
		buf->right = NIL;
		*focus = buf;
	}
	else if (k < (*focus)->key) insert(&((*focus)->left));
	else insert(&((*focus)->right));
}
void print_in(node* focus) {
	if (focus == NIL) return;
	print_in(focus->left);
	printf(" %d", focus->key);
	print_in(focus->right);
}

void print_pre(node* focus) {
	if (focus == NIL) return;
	printf(" %d", focus->key);
	print_pre(focus->left);
	print_pre(focus->right);
}

void print() {
	print_in(root);
	printf("\n");
	print_pre(root);
	printf("\n");
}

int main() {
	int m;
	root = NIL;
	cin >> m;
	char query[10];
	Loop(i, m) {
		scanf("%s", query);
		if (query[0] == 'i') {
			scanf("%d", &k);
			insert(&root);
		}
		else print();
	}
	return 0;
}
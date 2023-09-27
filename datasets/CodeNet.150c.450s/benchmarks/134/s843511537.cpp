//compiledef
#include <bits/stdc++.h>
#define rep(i, n) for(i=0;i<(n);i++)
#define per(i, n) for(i=(n);i>0;i--)
#define repx(i, n, x) for(i=(x);i<(n);i++)
#define xper(i, n, x) for(i=(n);i>(x);i--)
#define pback push_back

//c++def
using namespace std;
typedef long long int ll;
const ll MOD = 1e9+7;
const ll MOD2 = 998244353;
const int NN = -1;
typedef struct{
	int parent;
	int left;
	int right;
	int depth;
	int height;
}node;
node u[25000];
void checkdepth(int nd, int dp){
	if(nd == NN) return;
	u[nd].depth = dp;
	checkdepth(u[nd].left, dp+1);
	checkdepth(u[nd].right, dp+1);
}

int checkheight(int nd){
	int h1 = 0;
	int h2 = 0;
	if(u[nd].right != NN) h1 = checkheight(u[nd].right)+1;
	if(u[nd].left  != NN) h2 = checkheight(u[nd].left)+1;
	return u[nd].height = max(h1, h2);
}

int getsib(int c){
	if(u[c].parent == NN) return NN;
	if(u[u[c].parent].left == c && u[u[c].parent].right != NN) return u[u[c].parent].right;
	if(u[u[c].parent].right == c && u[u[c].parent].left != NN) return u[u[c].parent].left;
	return NN;
}
void preorder(int x){
	if(x == NN) return;
	printf(" %d", x);
	preorder(u[x].left);
	preorder(u[x].right);
}
void inorder(int x){
	if(x == NN) return;
	inorder(u[x].left);
	printf(" %d", x);
	inorder(u[x].right);
}
void posorder(int x){
	if(x == NN) return;
	posorder(u[x].left);
	posorder(u[x].right);
	printf(" %d", x);
}
int main(){
	int n, x, i, l, r;
	int root = 0;
	cin >> n;
	rep(i, n){
		u[i].parent=NN;
	}
	rep(i, n){
		scanf("%d %d %d", &x, &l, &r);
		u[x].left = l;
		u[x].right = r;
		if(l != NN) u[l].parent = x;
		if(r != NN) u[r].parent = x;
	}
	rep(i, n)if(u[i].parent == NN) root = i;
	cout << "Preorder" <<endl;
	preorder(root);
	cout <<endl;
	cout <<"Inorder" << endl;
	inorder(root);
	cout << endl;
	cout <<"Postorder" << endl;
	posorder(root);
	cout << endl;
}









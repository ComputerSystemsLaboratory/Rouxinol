#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

struct Node{
	int parent = -1;
	int left_child = -1;
	int right_child = -1;
};

void preorder(vector<Node>& a, int x){
	cout << " "<< x ;
	if(a[x].left_child == -1 && a[x].right_child == -1) return;
	if(a[x].left_child != -1){
		preorder(a, a[x].left_child);
	}
	if(a[x].right_child != -1){
		preorder(a, a[x].right_child);
	}
}

void inorder(vector<Node>& a, int x){
	if(a[x].left_child == -1 && a[x].right_child == -1){
		cout << " "<< x ;
		return;
	}
	if(a[x].left_child != -1){
		inorder(a, a[x].left_child);
	}
	cout << " "<< x;
	if(a[x].right_child != -1){
		inorder(a, a[x].right_child);
	}
}

void postorder(vector<Node>& a, int x){
	if(a[x].left_child == -1 && a[x].right_child == -1){
		cout << " " << x;
		return;
	}
	if(a[x].left_child != -1){
		postorder(a, a[x].left_child);
	}
	if(a[x].right_child != -1){
		postorder(a, a[x].right_child);
	}
	cout << " " << x;
}

int main(){
	int n;
	cin >> n;
	vector<Node> a(n);
	rep(i, n){
		int x;
		cin >>x;
		int l,r;
		cin >> l >> r;
		if(l != -1) a[l].parent = x;
		if(r != -1) a[r].parent = x;
		a[x].left_child = l;
		a[x].right_child = r;
	}
	rep(i, n){
		if(a[i].parent == -1){
			cout << "Preorder" << endl;
			preorder(a, i);
			cout << endl << "Inorder" << endl;
			inorder(a, i);
			cout << endl << "Postorder" << endl;
			postorder(a, i);
			cout << endl;
			break;
		}
	}

}


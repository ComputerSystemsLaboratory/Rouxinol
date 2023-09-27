#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(n) begin(n), end(n)
using ll = long long;
using namespace std;

struct node{
	int l, r;
};

void dfs(vector<node> &tree, int now, int mode){
	if(now == -1) return;
	if(mode == 0) cout << " " << now;
	dfs(tree, tree.at(now).l, mode);
	if(mode == 1) cout << " " << now;
	dfs(tree, tree.at(now).r, mode);
	if(mode == 2) cout << " " << now;
}

int main(){
	int n;
	cin >> n;
	vector<node> tree(n);
	rep(i, n){
		int id, a, b;
		cin >> id >> a >> b;
		tree.at(id).l = a;
		tree.at(id).r = b;
	}

	vector<bool> ch(n, false);
	rep(i, n){
		auto now = tree.at(i);
		if(now.l != -1) ch.at(now.l) = true;
		if(now.r != -1) ch.at(now.r) = true;
	}
	int stn = -1;
	rep(i, n){
		if(ch.at(i) == false){
			stn = i;
			break;
		}
	}

	cout << "Preorder" << endl;
	dfs(tree, stn, 0);
	cout << endl << "Inorder" << endl;
	dfs(tree, stn, 1);
	cout << endl << "Postorder" << endl;
	dfs(tree, stn, 2);
	cout << endl;
	return 0;
}

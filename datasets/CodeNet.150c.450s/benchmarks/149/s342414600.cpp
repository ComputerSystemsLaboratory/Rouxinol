#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> tree(20000);

int whatisroot(int x){
	if(x == tree[x]){
		return x;
	}
	else{
		int ref;
		ref = whatisroot(tree[x]);
		tree[x] = ref;
		return ref;
	}
}

int root(int x, int y){
	if(x == tree[x]){
		tree[x] = y;
		return y;
	}
	else{
		int ref;
		ref = root(tree[x], y);
		tree[x] = ref;
		return ref;
	}
}

void unite(int x, int y){
	int temp;
	if(x > y){
		temp = x;
		x = y;
		y = temp;
	}
	temp = whatisroot(x);
	tree[y] = root(tree[y],temp);
	return;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i<n;i++){
		tree[i] = i;
	}
	int q, com, x, y;
	cin >> q;
	for(int i = 0;i<q;i++){
		cin >> com >> x >> y;
		if(com == 0){
			unite(x,y);
		}
		else{
			if(whatisroot(x) == whatisroot(y)) cout << 1;
			else cout << 0;
			cout << endl;
		}
	}
	return 0;
}

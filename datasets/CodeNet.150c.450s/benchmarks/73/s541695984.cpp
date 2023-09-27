#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <list>

long long int INF = 2147483647;
long long int MOD = 1000000007;
using namespace std;

typedef pair<long long int, long long int> P;

#define MAX_N 200000

using namespace std;

int const TREE_SIZE = 1 << 20;
long long int seg_tree[TREE_SIZE];

void change(int a, long long int w){
	
	// a番目の要素をwに変更する O(log N)
	
	a += TREE_SIZE / 2;
	
	seg_tree[a] += w;
	
	for(int x = a / 2; x > 0; x /= 2){
		seg_tree[x] = seg_tree[2 * x] + seg_tree[2 * x + 1];
	}
}

long long int query(int a, int b, int index, int l, int r){
	
	// 区間 [a, b) の要素の最小値を返す O(log N)
	// 外からは query(a, b, 1, 0, TREE_SIZE / 2) のように呼ぶ
	
	if(r <= a || b <= l){
		return 0;
	}
	if(a <= l && r <= b){
		return seg_tree[index];
	}
	
	return query(a, b, index * 2, l, (l + r) / 2) + query(a, b, index * 2 + 1, (l + r) / 2, r);
}

int main(){
	
	int n, q;
	cin >> n >> q;
	
	for(int i = 0; i < TREE_SIZE; i++){
		seg_tree[i] = 0;
	}
	
	for(int i = 0; i < q; i++){
		long long int num, a, b;
		cin >> num >> a >> b;
		if(num == 0){
			change(a, b);
		}else{
			cout << query(a, b + 1, 1, 0, TREE_SIZE / 2) << endl;
		}
	}
	
	return 0;
}

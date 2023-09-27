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

long long int INF = 1e18;
using namespace std;

typedef pair<long long int, long long int> P;

int N = 210000 - 1; // 必要な数よりも大きい2^nよりも大きい数を入れるとよい
int BIT[210000];

void add(int a, int w){
	
	// a番目の要素にwを足す O(log N)
	
	for(int x = a; x <= N; x += x & -x){
		BIT[x] += w;
	}
}

int sum(int a){
	
	// 1からaまでの要素の合計を返す O(log N)
	
	int ret = 0;
	for(int x = a; x > 0; x -= x & -x){
		ret += BIT[x];
	}
	return ret;
}

void init(){
	for(int i = 0; i < N; i++){
		BIT[i] = 0;
	}
}

// バブルソートの交換回数、ind[i] が交換後のインデックス
long long int solve(int n, int A[]){
	long long int ans = 0;
	for(int i = 0; i < n; i++){
		ans += i - sum(A[i]);
		add(A[i], 1);
	}
	return ans;
}

int A[210000];

int main(){
	
	int n, q;
	cin >> n;
	
	vector<P> v;
	P p;
	
	for(int i = 0; i < n; i++){
		cin >> A[i];
		p.first = A[i];
		p.second = i;
		v.push_back(p);
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < n; i++){
		A[v[i].second] = i + 1;
	}
	
	init();
	cout << solve(n, A) << endl;
	
	return 0;
}

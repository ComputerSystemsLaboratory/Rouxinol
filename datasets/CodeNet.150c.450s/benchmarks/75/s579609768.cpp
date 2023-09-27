#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <string.h>
#include <cmath>


const int MAXN = 5e5;
int max_heap[MAXN];
int n;

void init() {
	
}

void heapify(int i) {
	while(i < n) {
		int L = 2 * i + 1;
		int R = 2 * i + 2;
		int mx;
		if(L >= n) {
			break;
		}
		if( R >= n){
			mx = L;
		}else{
			mx = (max_heap[L] > max_heap[R]) ? L : R;
		}
		if(max_heap[mx] <= max_heap[i]){
			break;
		}
		std::swap(max_heap[mx], max_heap[i]);
		i = mx;
	}
}

void build_heap() {
	for(int i = n / 2; i >= 0; i--){
		heapify(i);
	}
}

void input() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", max_heap + i);
	}
}

void output() {
	build_heap();
	for(int i = 0; i < n; i++){
		printf(" %d", max_heap[i]);
	}
	puts("");
}

int main() {
	init();
	input();
	output();
	return 0;
}

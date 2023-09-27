#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int k;

	cin >> n >> k;

	int* w = (int*)malloc(n * sizeof(int));

	int max_w = 0;
	int sum_w = 0;
	int p = 0;
	if(n < 1){
		return 0;
	}

	for(int i = 0; i < n; i++){
		cin >> w[i];
		sum_w += w[i];
		if(w[i] > max_w){
			max_w = w[i];
		}
	}
	p = max(max_w, sum_w/k);
	int current_w = 0;
	int current_k = 1;
	for(int i = 0; i <= n; ++i){
		if(current_w > p){
			++current_k;
			current_w = 0;
			--i;
			if(current_k > k){
				i = -1;
				current_k = 1;
				++p;
				continue;
			}
		}
		current_w += w[i];
	}
	cout << p <<endl;
	return 0;
}
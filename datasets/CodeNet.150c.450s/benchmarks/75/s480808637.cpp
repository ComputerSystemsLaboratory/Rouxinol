#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <list>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <climits>
using namespace std;

void maxHeap(int* keys, int size, int cur){
	if(cur*2 > size){
		// noop
	}else if(cur*2+1 > size && keys[cur*2] > keys[cur]){
		swap(keys[cur*2], keys[cur]);
	}else{
		int l = keys[cur*2];
		int r = keys[1+cur*2];
		if(l > r && l > keys[cur]){
			swap(keys[cur*2], keys[cur]);
			maxHeap(keys, size, cur*2);
		}else if(r > keys[cur]){
			swap(keys[1+cur*2], keys[cur]);
			maxHeap(keys, size, 1+cur*2);
		}
	}
}

int main() {
	int n;
	cin >> n;
	
	int keys[n+1];
	for(int i = 1; i <= n; i++){
		cin >> keys[i];
	}
	
	for(int i = n/2; i > 0; i--){
		maxHeap(keys, n, i);
	}
	
	for(int i = 1; i <= n; i++){
		cout << " " << keys[i];
	}
	cout << endl;
	
	return 0;
}
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

bool solve(int target, int* val, int size);
int main(){
	int n;
	int q;

	cin >> n;

	int* A = (int*)malloc(n * sizeof(int));
	for(int i = 0; i < n; ++i){
		cin >> A[i];
	}

	cin >> q;
	int m;
	for(int i = 0; i < q; ++i){
		cin >> m;
		if(solve(m, A, n)){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}

	return 0;
}
bool solve(int target, int* val, int size){
	for(int i = 0; i < size; ++i){
		if(target == val[i]) return true;
		if(target < val[i]) return solve(target, val+1, size - i - 1);
		if(target > val[i]) return solve(target, val+1, size - i - 1) || solve(target - val[i], val+1, size - i - 1);
	}
	return false;
}
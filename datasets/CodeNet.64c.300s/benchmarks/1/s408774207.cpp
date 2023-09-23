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


int partition(int *A, int p, int r){
	int x = A[r];
	int i = p-1;
	for(int j = p; j <= r-1; j++){
		if(A[j] <= x){
			swap(A[j], A[++i]);
		}
	}
	swap(A[r], A[++i]);
	return i;
}

int main() {
	int n;
	scanf("%d", &n);
	
	int d[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &d[i]);
	}
	
	int kijun = partition(d, 0, n-1);
	for(int i = 0; i < n; i++){
		printf(i==kijun ? "[%d]%c" : "%d%c", d[i], i+1==n ? '\n' : ' ');
	}
	
    return 0;
}
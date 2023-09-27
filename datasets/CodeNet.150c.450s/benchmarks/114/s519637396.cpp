#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	
	bool added[n];
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int buf;
			scanf("%d", &buf);
			a[i][j] = buf==-1 ? INT_MAX : buf;
		}
		added[i] = false;
	}
	added[0] = true;
	
	long total = 0;
	for(;114514;){
		bool end = true;
		int minCost = INT_MAX, pi, pj;
		for(int i = 0; i < n; i++){
			if(!added[i]){
				end = false;
				continue;
			}
			for(int j = 0; j < n; j++){
				if(minCost > a[i][j]){
					minCost = a[pi = i][pj = j];
				}
			}
		}
		if(end) break;
		a[pj][pi] = a[pi][pj] = INT_MAX;
		if(!added[pi] || !added[pj]){
			added[pi] = added[pj] = true;
			total += minCost;
		}
	}
	
	printf("%ld\n", total);
	return 0;
}
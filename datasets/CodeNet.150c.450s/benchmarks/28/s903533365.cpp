#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <vector>
using namespace std;
const int INF = 0x3f3f3f3f;

int m[100005];
int isOk(int n, int p, int cap){
	int j = 0;
	for(int i = 0; i < p; i++){
		int temp = cap;
		while(m[j] <= temp && j < n){
			temp -= m[j];
			j++;
		}
	}
	return j == n ? 1 : 0;
}

int main(){
	int n, p, Max1 = 0;
	cin >> n >> p;
	for(int i = 0; i < n; i++){
		scanf("%d", m + i);
		Max1 += m[i];
	}
	int l = 0, r = Max1, mid;
	while(l + 1 < r){
		mid = (l + r) / 2;
		if(isOk(n, p, mid))
			r = mid;
		else
			l = mid;
	}
	printf("%d\n", r);
	return 0;
}
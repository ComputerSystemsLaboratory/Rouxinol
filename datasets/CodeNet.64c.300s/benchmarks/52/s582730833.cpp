#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;

int ret;
int s;

void dfs(int begin, int depth, int sum){
    int i;
    if (depth == 0){
	if (s == sum) ret++;
	return;
    }
    for (i = begin+1; i <= 9; i++){
	dfs(i, depth-1, sum+i);
    }
}

int main(){
    int n;
    int i;
    while (cin >> n >> s, n || s){
	for (i = 0; i <= 9; i++){
	    dfs(i, n-1, i);
	}
	cout << ret << endl;
	ret = 0;
    }
    return 0;
}
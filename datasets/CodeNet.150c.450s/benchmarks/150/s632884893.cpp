#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
#include<string>
#include<functional>
#include<set>
#include<unordered_map>
using namespace std;

int b[2000005];
signed main(){
	int a; scanf("%d", &a);
	for (int c = 0; c < a; c++) {
		scanf("%d", &b[c]);
	}
	sort(b, b + a);
	for (int i = 0; i < a; i++) {
		if (i)cout << " ";
		cout << b[i];
	}
	puts("");
}
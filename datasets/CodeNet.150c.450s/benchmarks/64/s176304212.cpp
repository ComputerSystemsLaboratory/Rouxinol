#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
const int INF = 0x3f3f3f3f;

int n, q;
int A[25], m[205], flag[25], ans[205];

void find(int i){
	if(i == n){
		int temp = 0;
		for(int j = 0; j < n; j++)
			temp += flag[j] * A[j];
		for(int j = 0; j < q; j++)
			if(m[j] == temp)
				ans[j] = 1;
		return ;
	}
	flag[i] = 0; find(i + 1); flag[i] = 1; find(i + 1);
	return;
}

int main(){
	memset(ans, 0, sizeof(ans));
	cin >> n;
	for(int i = 0; i < n; i++)
		scanf("%d", A + i);
	cin >> q;
	for(int i = 0; i < q; i++)
		cin >> m[i];
	find(0);
	for(int i = 0; i < q; i++){
		if(ans[i])
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
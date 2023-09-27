#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 1e4 + 5; 

int n;
int a[maxn];

bool find(int key){
	for(int i = 1;i <= n; i++){
		if(a[i] == key)return true;
	}
	return false;
}

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n; i++){
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	int ans = 0;
	for(int i = 1;i <= m; i++){
		int k;
		scanf("%d",&k);
		if(find(k))ans++;
	}
	printf("%d\n",ans);
}
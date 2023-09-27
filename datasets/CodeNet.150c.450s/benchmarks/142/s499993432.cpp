#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=k+1;i<=n;i++){
		if(a[i]>a[i-k]) puts("Yes");
		else puts("No");
	}
	return 0;
}
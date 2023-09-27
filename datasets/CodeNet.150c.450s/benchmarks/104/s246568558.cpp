#include <bits/stdc++.h>
using namespace std;

int main() {
	int w,n;
	scanf("%d %d",&w,&n);
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		scanf("%d,%d",&a[i],&b[i]);
	}
	int ans[w+1];
	for(int i=1;i<=w;i++)ans[i]=i;
	int temp;
	for(int i=0;i<n;i++){
		temp=ans[a[i]];
		ans[a[i]]=ans[b[i]];
		ans[b[i]]=temp;
	}
	for(int i=1;i<=w;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
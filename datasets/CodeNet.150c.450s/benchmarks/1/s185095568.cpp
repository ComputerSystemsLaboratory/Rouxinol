#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main(){
	int n;
	scanf("%d",&n);
	memset(a,0x3f,sizeof(a));
	for(int i=0,x;i<n;i++){
		scanf("%d",&x);
		*lower_bound(a,a+n,x)=x;
	}
	printf("%d\n",lower_bound(a,a+n,0x3f3f3f3f)-a);
	return 0;
}
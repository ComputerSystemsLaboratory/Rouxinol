#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=2e5+5;
int a[N];
int main(){
	int n,k;scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)scanf("%d",a+i);
	for(int i=k;i<n;i++){
		if(a[i]>a[i-k])puts("Yes");
		else puts("No");
	}
	return 0;
}
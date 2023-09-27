#include <bits/stdc++.h>
using namespace std;
int n,a[666],i;
int main(){
	cin>>n;
	for(i=1;i<=n;i++)cin>>a[i];
	for(i=1;i<=n;i++){
		printf("node %d: key = %d, ",i,a[i]);
		if(i!=1)printf("parent key = %d, ",a[i/2]);
		if(i*2<=n)printf("left key = %d, ",a[i*2]);
		if(i*2+1<=n)printf("right key = %d, ",a[i*2+1]);
		puts("");
	}
	return 0;
}


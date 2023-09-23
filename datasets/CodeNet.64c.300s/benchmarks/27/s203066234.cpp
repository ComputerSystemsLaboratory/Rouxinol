#include <bits/stdc++.h>
using namespace std;

int ways(int n,int x){
	int a=0;
	for(int i=1;i<=n-2;i++) for(int j=i+1;j<=n-1;j++) for(int k=j+1;k<=n;k++) if(i+j+k==x) a++;
	return a;
}

int main(){
	int i,n,x,a[10000];
	for(i=0;;i++){
		cin>>n>>x;
		if(!n) break;
		a[i]=ways(n,x);
	}
	for(int j=0;j<i;j++) cout<<a[j]<<endl;
	return 0;
}


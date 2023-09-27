#include<bits/stdc++.h>
using namespace std;

int a[2000005],c[10005],b[2000005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
		++c[a[i]];
	}
		
	for(int i=0;i<=10000;++i)
		c[i]=c[i-1]+c[i];
		
	for(int i=1;i<=n;++i){
		b[c[a[i]]]=a[i];
		c[a[i]]--;
	}
	
	for(int i=1;i<=n;++i){
		if(i>1)printf(" ");
		printf("%d",b[i]);
	}
	puts("");
	return 0;
}

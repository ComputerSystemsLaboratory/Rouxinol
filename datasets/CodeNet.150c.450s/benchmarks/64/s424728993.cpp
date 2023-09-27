#include <stdio.h>
int main(){
	int n,m;
	bool a[20000];
	scanf("%d",&n);
	for(int i=1;i<20000;i++)a[i]=false;
	a[0]=true;
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		for(int j=2000-m;j>=0;j--)if(a[j])a[j+m]=true;
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&n);
		if(a[n])printf("yes\n");
		else printf("no\n");
	}
}
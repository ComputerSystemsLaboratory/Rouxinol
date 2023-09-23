#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);

	int ans=0;
	for(int i=0;i<n;i++){
		int mini=i;
		for(int j=i;j<n;j++){
			if(a[j]<a[mini]){
				mini=j;
			}
		}
		if(a[i]!=a[mini]){
			    swap(a[i],a[mini]);
			    ans++;
			}
	}
	for(int i=0;i<n;i++){
		if(i==n-1)printf("%d\n",a[i]);
		else printf("%d ",a[i]);
	}
	printf("%d\n",ans);
}
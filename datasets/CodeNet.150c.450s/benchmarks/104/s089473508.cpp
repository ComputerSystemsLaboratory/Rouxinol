#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int w,n;cin>>w>>n;
	int a[w+1];
	for(int i=1;i<=w;i++)a[i]=i;
	int b,c;
	for(int i=0;i<n;i++)
	{
		scanf("%d,%d",&b,&c);
		swap(a[b],a[c]);
	}
	for(int i=1;i<=w;i++)cout<<a[i]<<endl;
	return 0;
}
#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	
	int w,n,c[30],a,b,x;
	
	cin>>w>>n;
	
	for(int i=0;i<w;i++)c[i]=i+1;
	
	for(int i=0;i<n;i++){
		scanf("%d,%d",&a,&b);
		x=c[a-1];c[a-1]=c[b-1];c[b-1]=x;
	}
	for(int i=0;i<w;i++)cout<<c[i]<<endl;
	return 0;
}
#include<iostream>
#include<algorithm>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
int main(){
	int a[28];
	int f[31];
	rep(i,28)scanf("%d",&a[i]);
	
	fill(f,f+31,0);
	f[0]=1;
	
	rep(i,28)f[a[i]]=1;
	
	rep(i,30)if(f[i+1]==0)printf("%d\n",i+1);
}
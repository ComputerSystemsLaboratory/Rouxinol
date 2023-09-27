#include<iostream>
#include<algorithm>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
int main(){
	int a[2];
	int n[2][4];
	
	rep(i,2)rep(j,4)scanf("%d",&n[i][j]);
	
	a[0]=0;
	a[1]=0;
	
	rep(i,2)rep(j,4)a[i]+=n[i][j];
	
	printf("%d\n",max(a[0],a[1]));
	
}
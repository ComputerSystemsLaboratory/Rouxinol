#include<bits/stdc++.h>
using namespace std;
const int N=1e4+5;
int f[N];
int main(){
	int n,s,x;scanf("%d",&n),s=sqrt(n);
	for(int i=1;i<=s;i++)for(int j=1;j<=s;j++)for(int k=1;k<=s;k++){
		x=i*(i+j+k)+j*(j+k)+k*k;
		if(x<N)f[x]++;
	}
	for(int i=1;i<=n;i++)printf("%d\n",f[i]);
	return 0;
}
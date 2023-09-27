#include<bits/stdc++.h>
using namespace std;
int f[101][101];
int p[10001];
int n;
int doit(int i,int j){
	 if (f[i][j]!=0x1f1f1f1f)
	    return f[i][j];
	 for (int k=i; k<j; k++)
	 	 f[i][j]=min(f[i][j],doit(i,k)+doit(k+1,j)+p[i-1]*p[k]*p[j]);
	 return f[i][j];
}
    
int main(){
	cin>>n;
	for (int i=1; i<=n; i++)
	    cin>>p[i-1]>>p[i];
	memset(f,0x1f1f1f1f,sizeof(f));
	for (int i=1; i<=n; i++)
	    f[i][i]=0;
	doit(1,n);
    cout<<f[1][n]<<endl;
	return 0;
}

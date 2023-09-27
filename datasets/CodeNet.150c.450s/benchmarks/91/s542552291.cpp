#include<iostream>
#include<cstdio>
using namespace std;
const int maxn=1e6+5,maxm=1e5+5;
int fac[maxn],pri[maxm],siz;
int a[maxn];
void euler(){
	int i,j;
	siz=0;
	for (i=0;i<maxn;i++) fac[i]=i;
	for (i=2;i<maxn;i++){
		if (fac[i]==i) pri[siz++]=i;
		for (j=0;j<siz&&pri[j]<=fac[i]&&i*pri[j]<maxn;j++)
			fac[i*pri[j]]=pri[j];
	}
}
int main(){
	int i,n;
	euler();
	a[0]=a[1]=0;
	for (i=2;i<maxn;i++)
		a[i]=a[i-1]+(fac[i]==i);
	while (scanf("%d",&n)!=EOF)
		printf("%d\n",a[n]);
	return 0;
}


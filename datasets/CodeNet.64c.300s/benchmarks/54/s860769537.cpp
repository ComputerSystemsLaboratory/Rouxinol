#include<stdio.h>
#include<algorithm>
using namespace std;
long long n,m,i,j,p,a[100],s[100][21];
int main(void)
{
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<21;j++){
			s[i][j]=0;
		}
	}
	s[0][a[0]]=1;
	for(i=1;i<n-1;i++){
		for(j=0;j<21;j++){
			if(s[i-1][j]>0&&j+a[i]<=20){
				s[i][j+a[i]]+=s[i-1][j];
			}
			if(s[i-1][j]>0&&j-a[i]>=0){
				s[i][j-a[i]]+=s[i-1][j];
			}
		}
	}
	printf("%lld\n",s[n-2][a[n-1]]);
	return 0;
}
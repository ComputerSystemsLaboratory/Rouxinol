#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int n;	scanf("%d",&n);
	int in[n];
	for(int i=0;i<n;i++)	scanf("%d",&in[i]);
	long long int out[n][21];	memset(out,0,sizeof(out));
	out[0][in[0]]=1;
	for(int i=1;i<n;i++){
		for(int j=0;j<=20;j++){
			if(j-in[i]>=0)	out[i][j-in[i]]+=out[i-1][j];
			if(j+in[i]<=20)	out[i][j+in[i]]+=out[i-1][j];
		}
	}
	printf("%lld\n",out[n-1][0]);//P=a→P-a=0
	return 0;
}
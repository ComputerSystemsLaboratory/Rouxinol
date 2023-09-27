#include <cstdio>
#include <cstring>
using namespace std;

int a[50],n,p;
int main(){
	while(scanf("%d%d",&p,&n),n*p){
		memset(a,0,sizeof(int)*50);
		int t=n,z=0;
		for(;!(a[z]==n-1&&t==1);z=(z+1)%p){
			if(t){
				t--;
				a[z]++;
			}else{
				t=a[z];
				a[z]=0;
			}
		}
		printf("%d\n",z);
	}
	return 0;
}
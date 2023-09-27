#include <cstdio>
using namespace std;
#define rep1(i,n) for(int i=1;i<=n;i++)
int main(){
	while(true){
		int n,cnt=0;
		scanf("%d",&n);
		if(n==0) break;
		rep1(a,1000){
			rep1(m,1000){
				if(m==1) continue;
				if((2*a+m-1)*m/2==n) cnt++;
				if((2*a+m-1)*m/2>n) break;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
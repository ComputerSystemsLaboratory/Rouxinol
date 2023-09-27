#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
const int c=1000000;
bool prime[c+1];
void makeprime(){
	rep1(i,c) prime[i]=1;
	prime[1]=0;
	for(int i=2;i*i<=c;i++) if(prime[i]) for(int j=2;j*i<=c;j++) prime[j*i]=0;
}
int main(){
	makeprime();
	while(true){
		int a,d,n;
		scanf("%d%d%d",&a,&d,&n);
		if(n==0) break;
		for(;;a+=d){
			if(prime[a]) n--;
			if(n==0){
				printf("%d\n",a);
				break;
			}
		}
	}
	return 0;
}
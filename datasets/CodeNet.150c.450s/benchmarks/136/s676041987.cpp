#include <cstdio>
#include <algorithm>
using namespace std;

int a,b;

long long GCD(int a, int b){
	if(b%a==0)
		return a;
	else
		return GCD(b%a,a);
}

int main(){
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a>b)swap(a,b);
		int ans=GCD(a,b);
		printf("%d %d\n",ans,b/ans*a);
	}
}

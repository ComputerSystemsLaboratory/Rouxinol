#include<cstdio>
#include<algorithm>
using namespace std;

int a,b;

int gcd(int a,int b){
	if(b==0)  return a;
	return gcd(b,a%b);
}

int main(){
	while(scanf("%d%d",&a,&b)==2){
		int G=gcd(a,b);
		int L=a/G*b;
		printf("%d %d\n",G,L);
	}
	
	return 0;
}
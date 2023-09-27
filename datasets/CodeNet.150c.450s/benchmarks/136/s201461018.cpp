#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;
ll g,l;

ll gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

ll lcm(int a,int b){
	return a/g*b;
}

int main(){
	ll a,b;
	while(scanf("%lld%lld",&a,&b)!=EOF){
		g=gcd(a,b);
		l=lcm(a,b);
		printf("%lld %lld\n",g,l);
	}
	return 0;
}


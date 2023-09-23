#include <cstdio>
using namespace std;

const long long zero = 0LL;
long long lcm, gcd;
long long GCD(long long,long long);

int main(){
	long long a,b;
	while( scanf(" %lld%lld",&a,&b)!=EOF ){
		gcd = GCD(a,b);
		lcm = a/gcd*b;
		printf("%lld %lld\n",gcd,lcm);
	}
}

long long GCD(long long a,long long b){
	if( b==zero ) return a;
	return GCD( b , (a%b) );
}
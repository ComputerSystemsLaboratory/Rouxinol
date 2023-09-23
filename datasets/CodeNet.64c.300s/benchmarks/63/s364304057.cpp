#include <cstdio>
#include <cmath>
#define ele long
using namespace std;
ele a,b;
ele gcd(ele a,ele b){
	if (b==0) return a;
	return gcd(b,a%b);
}
inline ele lcm(ele a,ele b){ return a/gcd(a,b)*b; }
int main(){
	while (~scanf("%d%d",&a,&b)) printf("%d %d\n",gcd(a,b),lcm(a,b));
	return 0;
}
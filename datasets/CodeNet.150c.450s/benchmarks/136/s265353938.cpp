#include <cstdio>
using namespace std;

int gcd(int a,int b){return b? gcd(b,a%b):a;}
int lcm(int a,int b){return a / gcd(a,b) * b;}

int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b) != EOF) {
		printf("%d %d\n",gcd(a,b),lcm(a,b));
	}
	return 0;
}
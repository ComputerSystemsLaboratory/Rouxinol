#include <cstdio>
using namespace std;

typedef long long Int;

int main(){
	int n;
	Int res;
	
	scanf("%d", &n);
	
	res = 1;
	while(n > 1){
		res *= n;
		n--;
	}
	
	printf("%lld\n", res);
	
	return 0;
}
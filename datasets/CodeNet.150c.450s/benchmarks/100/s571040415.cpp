#include <cstdio>

using namespace std;

int main()
{
	int n;
	long long tmp = 1;
	
	scanf("%d", &n);
	
	for (int i = n; i >= 1; i--){
		tmp *= i;
	}
	
	printf("%lld\n", tmp);
	
	return (0);
}
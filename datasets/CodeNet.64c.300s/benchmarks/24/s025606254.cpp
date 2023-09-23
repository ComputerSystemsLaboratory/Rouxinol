#include <cstdio>

using namespace std;

int main()
{
	int n;
	int a, b;
	int a_s, b_s;
	
	while (scanf("%d", &n), n != 0){
		a_s = b_s = 0;
		
		while (n != 0){
		scanf("%d %d", &a, &b);
		
		if (a > b) a_s += a + b;
		else if (a < b) b_s += b + a;
		else {
			a_s += a;
			b_s += b;
		}
		n--;
		}
		
		printf("%d %d\n", a_s, b_s);
	}
}
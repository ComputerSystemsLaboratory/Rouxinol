#include <cstdio>
using namespace std;

int main(){
	int a,b,s,o;
	while(scanf("%d %d", &a, &b) != EOF){
		s = a + b;
		o = 0;
		while(s != 0){
			s /= 10;
			o++;
		}
		printf("%d\n", o);
	}

	return 0;
}
#include<stdio.h>
using namespace std;

int main(){
	long long sum , E;
	int y, z;
	while (scanf("%lld", &E), E){
		sum = 1000000;
		for (z = 0; z*z*z <= E; z++)
			for (y = 0; y*y <= E; y++){
				long long x = E - z*z*z - y*y;
				if (x<0){ break; }
				else if (sum>(x + y + z))sum = x + y + z;
			}
		printf("%lld\n", sum);
	}

	return 0;
}
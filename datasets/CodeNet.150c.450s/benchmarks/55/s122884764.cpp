#include <cstdio>
#include <math.h>
using namespace std;
 
int main(){
	char x[1000];
	while(true){
		scanf("%s", x);
		if(x[0] == '0') break;
		int sum = 0;
		for(int i = 0; x[i] != '\0'; ++i){
			sum += x[i] - '0';
		}
		printf("%d\n", sum);
	}
	return 0;
}
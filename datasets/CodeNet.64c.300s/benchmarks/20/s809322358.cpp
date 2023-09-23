#include <cstdio>
using namespace std;

int main(){
	int n;
	int x;
	int S;
	
	while((scanf("%d", &n)) != EOF){
		x = n;
		S = 0;
		while(x < 600){
			S += n * (x * x);
			x += n;
		}
		printf("%d\n", S);
	}
	
	return 0;
}
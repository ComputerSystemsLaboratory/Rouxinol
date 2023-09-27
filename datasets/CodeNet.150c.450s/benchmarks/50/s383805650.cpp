#include <cstdio>
using namespace std;

int main(){
	int N;
	int pt, res, money[] = {500, 100, 50, 10, 5, 1};
	
	while(true){
		scanf("%d", &N);
		
		if(N == 0) return 0;
		
		N = 1000 - N;
		
		pt = 0; res = 0;
		while(N > 0){
			while(N >= money[pt]){
				N -= money[pt];
				res++;
			}
			pt++;
		}
		
		printf("%d\n", res);
	}
}
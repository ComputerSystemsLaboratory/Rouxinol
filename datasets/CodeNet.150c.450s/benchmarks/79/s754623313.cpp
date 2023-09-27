#include <cstdio>
using namespace std;

int main(){
	int n, r, p, c;
	const int SIZE = 50;
	int card[SIZE];
	int P[SIZE], C[SIZE];
	
	while(true){
		scanf("%d%d", &n, &r);
		if(n == 0 && r == 0) break;
		
		for(int i = n; i > 0; i--){
			card[n - i] = i;
		}
		
		for(int i = 0; i < r; i++){
			scanf("%d%d", &p, &c);
			for(int j = 0; j < p - 1; j++) P[j] = card[j];
			for(int j = 0; j < c; j++) C[j] = card[j + p - 1];
			
			for(int j = 0; j < c; j++) card[j] = C[j];
			for(int j = 0; j < p - 1; j++) card[j + c] = P[j];
		}
		
		printf("%d\n", card[0]);
	}
	
	return 0;
}
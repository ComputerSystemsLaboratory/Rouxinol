#include <cstdio>
using namespace std;

int main(){
	int n;
	int A, B;
	int res_A, res_B;
	
	while(true){
		scanf("%d", &n);
		
		if(n == 0) return 0;
		
		res_A = 0; res_B = 0;
		for(int i = 0; i < n; i++){
			scanf("%d%d", &A, &B);
			if(A > B) res_A += A + B;
			else if(A < B) res_B += A + B;
			else{
				res_A += A; res_B += B;
			}
		}
		
		printf("%d %d\n", res_A, res_B);
	}
}
#include <cstdio>
using namespace std;

int main(){
	const int MAX_n = 1000000;
	int n;
	bool prime[MAX_n];
	int res;
	
	for(int i = 0; i < MAX_n; i++) prime[i] = false;
	
	for(int i = 2; i < MAX_n; i++){
		if(!prime[i]){
			//printf("%d\n", i);
			for(int j = i + i; j < MAX_n; j += i){
				prime[j] = true;
				
			}
		}
	}
	
	//for(int i = 0; i < MAX_n; i++) if(prime[i]) printf("%d\n", i);
	
	while((scanf("%d", &n)) != EOF){
		res = 0;
		
		for(int i = 2; i <= n; i++){
			if(!prime[i]){ res++; }
		}
		
		printf("%d\n", res);
	}
	
	return 0;
}
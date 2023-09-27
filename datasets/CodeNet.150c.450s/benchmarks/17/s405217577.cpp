#include <cstdio>
using namespace std;

int main(){
	int n[5], sub;
	
	for(int i = 0; i < 5; i++) scanf("%d", &n[i]);
	
	for(int i = 0; i < 5; i++){
		for(int j = 4; j >= i; j--){
			if(n[i] < n[j]){
				sub = n[i];
				n[i] = n[j];
				n[j] = sub;
			}
		}
	}
	
	for(int i = 0; i < 5; i++) printf("%d%c", n[i], (i == 4)? '\n' : ' ');
	
	return 0;
}
#include <cstdio>
using namespace std;

int main(){
	int a[4], b[4];
	int hit, blow;
	
	while((scanf("%d", &a[0])) != EOF){
		for(int i = 1; i < 4; i++) scanf("%d", &a[i]);
		for(int i = 0; i < 4; i++) scanf("%d", &b[i]);
		
		hit = 0; blow = 0;
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 4; j++){
				if(a[i] == b[j]){
					if(i == j) hit++;
					else blow++;
				}
			}
		}
		
		printf("%d %d\n", hit, blow);
	}
	
	return 0;
}
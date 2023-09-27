#include <cstdio>
using namespace std;

int main(){
	
	int h,tmp,filled,combo;
	int last_score, score;
	int a[10][5];
	
	while(1){
		score = 0;
		last_score = -1;
		scanf(" %d", &h);
		if(h == 0){
			break;
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				scanf(" %d", (a[i]+j));
			}
		}
		
		
		while(last_score != score){	//while2 begin
			last_score = score;

			//erasing and scoring
			for(int i=0;i<h;i++){
				combo = 0;
				for(int j=1;j<5;j++){
					if(a[i][j] == a[i][j-1]){
						combo ++;
					}else{
						if(combo >= 2){
							for(int k=combo;k>=0;k--){
								score += a[i][j-1-k];
								a[i][j-1-k] = 0;
							}
						}
						combo = 0;
					}
				}
				//not DRY...
				if(combo >= 2){
					for(int k=combo;k>=0;k--){
						score += a[i][4-k];
						a[i][4-k] = 0;
					}
				}
			}
			
			//dropping
			for(int j=0;j<5;j++){
				filled = 0;
				for(int i=h-1;i>=0;i--){
					if(a[i][j] != 0){
						tmp = a[i][j];
						a[i][j] = 0;
						a[h-1 - filled][j] = tmp;

						filled ++;
					}
				}
			}
		//debug
/*		printf("score:%d\n",score);
		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
*/			
		}		//while2 end	
		printf("%d\n",score);
	}
	
	return 0;
}
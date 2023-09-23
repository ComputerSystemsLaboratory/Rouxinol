#include<cstdio>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	int c[9];
	while(a || b){
		int count = 0;
		if(b < 46){
			for(int i = 0; i < 10; i++){
				for(int j = i + 1; j < 10; j++){
					for(int k = j + 1; k < 10; k++){
						for(int l = k + 1; l < 10; l++){
							for(int m = l + 1; m < 10; m++){
								if(a == 5){
									if(i + j + k + l + m == b){
										count++;
									}
								}
							}
							if(a == 4){
								if(i + j + k + l == b){
									count++;
								}
							}else if(a == 6){
								if(i + j + k + l == 45 - b){
									count++;
								}
							}
						}
						if(a == 3){
							if(i + j + k == b){
								count++;
							}
						}else if(a == 7){
							if(i + j + k == 45 - b){
								count++;
							}
						}
					}
					if(a == 2){
						if(i + j == b){
							count++;
						}
					}else if(a == 8){
						if(i + j == 45 - b){
							count++;
						}
					}
				}
				if(a == 1){
					if(i == b){
						count++;
					}
				}else if(a == 9){
					if(i == 45 - b){
						count++;
					}
				}
			}
		}
		printf("%d\n", count);
		scanf("%d %d", &a, &b);
	}
	return 0;
}
#include<cstdio>

int main(){
	int taro = 0, hanako = 0;
	int turn;
	char cardt[100], cardh[100];
	char c;
	scanf("%d", &turn);
	scanf("%c", &c);
	for(int i = 0; i < turn ; i++){
		scanf("%c", &c);
		int j = 0;
		while(c - 32){
			cardt[j] = c;
			j++;
			scanf("%c", &c);
		}
		cardt[j] = 0;
		j = 0;
		scanf("%c", &c);
		while(c - 10){
			cardh[j] = c;
			j++;
			scanf("%c", &c);
		}
		cardh[j] = 0;
		j = 0;
		while(cardt[j] || cardh[j]){
			if(cardt[j] < cardh[j]){
				hanako += 3;
				break;
			}else if(cardt[j] > cardh[j]){
				taro += 3;
				break;
			}else{
				j++;
			}
			if(cardt[j] == 0 & cardh[j] == 0){
				taro++;
				hanako++;
			}
		}
	}
	printf("%d %d\n", taro, hanako);
	return 0;
}